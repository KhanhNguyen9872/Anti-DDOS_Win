## Connection manager
import socket
from threading import Thread, Lock
from time import sleep

class ConnectionManager:
    """Quản lý kết nối và forwarding"""
    
    def __init__(self, request_count_ref, blocked_ips_ref, connection_keys_ref, connection_count_ref, config, block_manager, firewall_manager, time_run_func):
        """
        Args:
            request_count_ref: Reference đến dict đếm request từ mỗi IP
            blocked_ips_ref: Reference đến set IP bị chặn
            connection_keys_ref: Reference đến list key của các kết nối
            connection_count_ref: Reference đến số lượng kết nối đang active
            config: Config dict
            block_manager: BlockManager instance
            firewall_manager: FirewallManager instance
            time_run_func: Function để chạy time counter
        """
        self.request_count_ref = request_count_ref
        self.blocked_ips_ref = blocked_ips_ref
        self.connection_keys_ref = connection_keys_ref
        self.connection_count_ref = connection_count_ref
        self.config = config
        self.block_manager = block_manager
        self.firewall_manager = firewall_manager
        self.time_run_func = time_run_func
        self.listening_socket = None
        self.current_connected_ips = set()  # Set để check O(1) thay vì list
        self.connections = {}  # Dict để lưu connections thay vì dùng globals
        self.connection_lock = Lock()  # Lock cho thread safety
    
    def forward(self, client_ip, port, source_socket, destination_socket, is_new_connection, is_user_send, client_port=""):
        """Forward data giữa sockets"""
        try:
            while True:
                data = source_socket.recv(65535)
                if not data:
                    source_socket.shutdown(socket.SHUT_RD)
                    destination_socket.shutdown(socket.SHUT_WR)
                    break
                destination_socket.sendall(data)
        except TimeoutError:
            print(">> Timeout: Port {} from {}".format(str(port), str(client_ip)))
        except ConnectionAbortedError:
            print(">> Aborted connection: Port {} from {}".format(str(port), str(client_ip)))
        except ConnectionResetError:
            print(">> Close connection: Port {} from {}".format(str(port), str(client_ip)))
        except ConnectionRefusedError:
            print(">> Connection refused: Port {} from {}".format(str(port), str(client_ip)))
        except:
            pass
        
        if is_new_connection == 1:
            conn_key = "conn_{}:{}".format(str(client_ip), str(client_port))
            with self.connection_lock:
                self.connection_count_ref[0] -= 1
                if conn_key in self.connection_keys_ref:
                    self.connection_keys_ref.remove(conn_key)
                if conn_key in self.connections:
                    del self.connections[conn_key]
                # Kiểm tra xem IP còn connection nào khác không
                has_other_conn = any(k.startswith("conn_{}:".format(client_ip)) for k in self.connection_keys_ref)
                if not has_other_conn:
                    self.current_connected_ips.discard(client_ip)
        
        try:
            source_socket.shutdown(socket.SHUT_RD)
            destination_socket.shutdown(socket.SHUT_WR)
        except:
            return
    
    def close_conn_by_ip(self, client_ip):
        """Đóng tất cả connections của một IP"""
        conn_keys_to_remove = []
        with self.connection_lock:
            for conn_key in list(self.connections.keys()):
                if "conn_{}:".format(client_ip) in conn_key:
                    try:
                        self.connections[conn_key].close()
                    except:
                        pass
                    conn_keys_to_remove.append(conn_key)
            
            for conn_key in conn_keys_to_remove:
                if conn_key in self.connections:
                    del self.connections[conn_key]
                if conn_key in self.connection_keys_ref:
                    self.connection_keys_ref.remove(conn_key)
                    self.connection_count_ref[0] = max(0, self.connection_count_ref[0] - 1)
            
            # Xóa IP khỏi current_connected_ips
            self.current_connected_ips.discard(client_ip)
    
    def close_conn(self):
        """Đóng tất cả kết nối"""
        try:
            if self.listening_socket:
                self.listening_socket.close()
        except:
            pass
        
        for conn_key in list(self.connections.keys()):
            try:
                self.connections[conn_key].close()
            except:
                pass
        self.connections.clear()
    
    def open_port(self, port):
        """Mở port và xử lý kết nối"""
        self.current_connected_ips = set()
        self.connection_keys_ref.clear()
        self.connection_count_ref[0] = 0
        connection_number = 0
        
        self.listening_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            # Tối ưu socket options
            self.listening_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
            try:
                # SO_KEEPALIVE để phát hiện kết nối chết
                self.listening_socket.setsockopt(socket.SOL_SOCKET, socket.SO_KEEPALIVE, 1)
            except:
                pass
            try:
                # TCP_NODELAY để giảm latency
                self.listening_socket.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1)
            except:
                pass  # Một số hệ thống không hỗ trợ TCP_NODELAY
            
            host_fake = self.config.get('host_fake', '0.0.0.0')
            self.listening_socket.bind((str(host_fake), int(port)))
            socket_backlog = self.config.get('socket_backlog', 128)
            self.listening_socket.listen(socket_backlog)
            self.firewall_manager.create_rule(port)
            Thread(target=self.time_run_func, args=()).start()
            print(">> Started! (KhanhNguyen9872)")
            
            while True:
                try:
                    client_socket, client_address = self.listening_socket.accept()
                    client_ip = client_address[0]
                    client_port = client_address[1]
                    
                    if (client_ip in self.blocked_ips_ref):
                        # Đóng socket ngay lập tức để ngắt kết nối
                        try:
                            client_socket.shutdown(socket.SHUT_RDWR)
                        except:
                            pass
                        try:
                            client_socket.close()
                        except:
                            pass
                        print("Blocked connection from {0}".format(client_ip))
                        continue
                    else:
                        max_conn = self.config.get('max_conn', 30)
                        if (self.connection_count_ref[0] <= max_conn) or (client_ip in self.current_connected_ips):
                            # Sử dụng sliding window counter
                            self.request_count_ref.add_request(client_ip)
                            request_count = self.request_count_ref.get_count(client_ip)
                            
                            block_on_count = self.config.get('block_on_count', 15)
                            if request_count > block_on_count:
                                print("!! Detected DDOS from {} ({} requests)! Blocking...".format(client_ip, request_count))
                                self.blocked_ips_ref.add(client_ip)
                                # Đóng socket ngay lập tức trước khi block
                                try:
                                    client_socket.shutdown(socket.SHUT_RDWR)
                                except:
                                    pass
                                try:
                                    client_socket.close()
                                except:
                                    pass
                                # Tạo socket mới để pass vào block_ip vì socket đã đóng
                                dummy_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                                Thread(target=self.block_manager.block_ip, args=(client_ip, port, dummy_socket)).start()
                                continue
                            
                            with self.connection_lock:
                                if client_ip not in self.current_connected_ips:
                                    self.connection_count_ref[0] += 1
                                    is_new_connection = 1
                                    self.current_connected_ips.add(client_ip)
                                else:
                                    is_new_connection = 0
                            conn_key = "conn_{}:{}".format(str(client_ip), str(client_port))
                            self.connection_keys_ref.append(conn_key)
                            self.connections[conn_key] = client_socket
                            
                            connection_number += 1
                            request_count = self.request_count_ref.get_count(client_ip)
                            print(f"{connection_number}. Port {port} -> {self.config.get('port_real', 81)} | Accept: {client_ip} ({request_count})")
                            
                            host_real = self.config.get('host_real', '127.0.0.1')
                            port_real = self.config.get('port_real', 81)
                            timeout_conn = self.config.get('timeout_conn', 180)
                            
                            server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                            server_socket.settimeout(5)
                            server_socket.connect((str(host_real), int(port_real)))
                            server_socket.settimeout(timeout_conn)
                            client_socket.settimeout(timeout_conn)
                            
                            Thread(target=self.forward, args=(client_ip, port, client_socket, server_socket, 1, is_new_connection, client_port)).start()
                            Thread(target=self.forward, args=(client_ip, port, server_socket, client_socket, 0, 0)).start()
                        else:
                            print("Full connection {}".format(client_ip))
                            # Đóng socket ngay khi đầy connection
                            try:
                                client_socket.shutdown(socket.SHUT_RDWR)
                            except:
                                pass
                            try:
                                client_socket.close()
                            except:
                                pass
                    
                    time_connect = self.config.get('time_connect', 0)
                    sleep(float(time_connect))
                except OSError as e:
                    if '[closed]' not in str(self.listening_socket):
                        print(f"ERROR: Port {port} | {e}")
                        try:
                            client_socket.close()
                        except:
                            pass
                        continue
                    break
                except:
                    continue
        except PermissionError:
            print(f"ERROR: Port {port} cannot be spoof! Need administrator permission!!")
            return
        except OSError as e:
            print(f"ERROR: Port {port} | {e}")
            return

