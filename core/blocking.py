## Block manager
from threading import Thread, Lock
from time import sleep, time
from collections import defaultdict

class SlidingWindowCounter:
    """Quản lý request count theo sliding window"""
    
    def __init__(self, window_size=60):
        """
        Args:
            window_size: Kích thước cửa sổ thời gian (giây)
        """
        self.window_size = window_size
        self.request_timestamps = defaultdict(list)  # IP -> list timestamps
        self.lock = Lock()
    
    def add_request(self, ip):
        """Thêm một request cho IP"""
        current_time = time()
        with self.lock:
            self.request_timestamps[ip].append(current_time)
            # Xóa các timestamps cũ hơn window_size
            cutoff_time = current_time - self.window_size
            self.request_timestamps[ip] = [
                ts for ts in self.request_timestamps[ip] 
                if ts > cutoff_time
            ]
    
    def get_count(self, ip):
        """Lấy số request của IP trong window"""
        current_time = time()
        with self.lock:
            if ip not in self.request_timestamps:
                return 0
            cutoff_time = current_time - self.window_size
            # Xóa timestamps cũ và trả về count
            self.request_timestamps[ip] = [
                ts for ts in self.request_timestamps[ip] 
                if ts > cutoff_time
            ]
            return len(self.request_timestamps[ip])
    
    def clear_ip(self, ip):
        """Xóa tất cả request của IP"""
        with self.lock:
            if ip in self.request_timestamps:
                del self.request_timestamps[ip]
    
    def cleanup_old_ips(self):
        """Dọn dẹp các IP không còn request trong window"""
        current_time = time()
        cutoff_time = current_time - self.window_size
        with self.lock:
            ips_to_remove = []
            for ip, timestamps in self.request_timestamps.items():
                valid_timestamps = [ts for ts in timestamps if ts > cutoff_time]
                if not valid_timestamps:
                    ips_to_remove.append(ip)
                else:
                    self.request_timestamps[ip] = valid_timestamps
            
            for ip in ips_to_remove:
                del self.request_timestamps[ip]

class BlockManager:
    """Quản lý việc chặn IP"""
    
    def __init__(self, blocked_ips_ref, banned_ips_string_ref, elapsed_seconds_ref, connection_keys_ref, config, firewall_manager, connection_manager=None):
        """
        Args:
            blocked_ips_ref: Reference đến set IP bị chặn
            banned_ips_string_ref: Reference đến chuỗi IP bị ban cho firewall
            elapsed_seconds_ref: Reference đến thời gian đã chạy (giây)
            connection_keys_ref: Reference đến list key của các kết nối
            config: Config dict
            firewall_manager: FirewallManager instance
            connection_manager: ConnectionManager instance (optional)
        """
        self.blocked_ips_ref = blocked_ips_ref
        self.banned_ips_string_ref = banned_ips_string_ref
        self.elapsed_seconds_ref = elapsed_seconds_ref
        self.connection_keys_ref = connection_keys_ref
        self.config = config
        self.firewall_manager = firewall_manager
        self.connection_manager = connection_manager
    
    def block_with_time(self, client_ip, unblock_time, should_add_to_list=1):
        """Chặn IP theo thời gian"""
        if should_add_to_list == 1:
            self.blocked_ips_ref.add(client_ip)
        while self.elapsed_seconds_ref[0] <= unblock_time:
            sleep(1)
        self.blocked_ips_ref.discard(client_ip)
        print("Unblock: {} (Out of time)".format(client_ip))
    
    def block_ip(self, client_ip, port, client_socket, block_type=0):
        """
        Chặn IP
        Args:
            client_ip: IP cần chặn
            port: Port
            client_socket: Socket connection của client
            block_type: 0 = spam, 1 = send data large
        """
        # Xóa request count của IP bị block để tránh memory leak
        if hasattr(self, 'request_counter') and self.request_counter:
            self.request_counter.clear_ip(client_ip)
        type_block_spam = self.config.get('type_block_spam', 2)
        type_block_send_data = self.config.get('type_block_send_data', 0)
        block_time_minutes = self.config.get('block_time', 30)
        
        if (type_block_spam == 2 and block_type == 0) or (type_block_send_data == 2 and block_type == 1):
            print("Block IP forever: {}".format(client_ip))
            banned_ips_string = self.banned_ips_string_ref[0]
            if (len(banned_ips_string) < 8111):
                banned_ips_string += str("," + client_ip)
                self.banned_ips_string_ref[0] = banned_ips_string
            self.firewall_manager.add_ip_rule(port)
            with open("block_ip.txt", "a") as f:
                f.write(",{},\n".format(client_ip))
        elif (type_block_spam == 3 and block_type == 0) or (type_block_send_data == 3 and block_type == 1):
            if block_time_minutes != 0:
                unblock_time = self.elapsed_seconds_ref[0] + (block_time_minutes * 60)
                print("Block {} for {} minutes".format(client_ip, block_time_minutes))
                Thread(target=self.block_with_time, args=(client_ip, unblock_time, 0)).start()
        else:
            print("Block on ram: {}".format(client_ip))
        
        print("Close all connection from {}".format(client_ip))
        try:
            client_socket.close()
        except:
            pass
        
        # Đóng tất cả connections của IP này
        if self.connection_manager:
            self.connection_manager.close_conn_by_ip(client_ip)
        else:
            # Fallback: chỉ xóa khỏi connection_keys_ref
            for conn_key in [s for s in self.connection_keys_ref if "conn_{}:".format(client_ip) in s]:
                try:
                    self.connection_keys_ref.remove(conn_key)
                except:
                    pass
    
    def is_blocked(self, client_ip):
        """Kiểm tra IP có bị chặn không"""
        return client_ip in self.blocked_ips_ref

