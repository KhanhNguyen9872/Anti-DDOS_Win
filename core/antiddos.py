## Anti-DDOS main class
from os import getpid, name, system
from time import sleep
from threading import Thread

from core.firewall import FirewallManager
from core.blocking import BlockManager
from core.connection import ConnectionManager
from core.proxy import ProxyManager
from core.validator import ConfigValidator
from utils.helpers import clear, time_run
from utils.admin import kill_process

class AntiDDOS:
    """Class chính quản lý Anti-DDOS"""
    
    def __init__(self, config):
        """
        Args:
            config: Config dict từ config.py
        """
        self.config = config
        self.pid = getpid()
        
        # State variables (sử dụng list/dict để có thể pass reference)
        from core.blocking import SlidingWindowCounter
        rate_limit_window = config.get('rate_limit_window', 60)
        self.request_count_per_ip = SlidingWindowCounter(rate_limit_window)  # Sliding window counter
        self.blocked_ips = set()  # Danh sách IP bị chặn (set để check O(1))
        self.banned_ips_string = [str(config.get('ban_ip', '')).replace("/32", "")]  # Chuỗi IP bị ban cho firewall
        self.elapsed_seconds = [0]  # Thời gian đã chạy (giây)
        self.connection_keys = []  # Danh sách key của các kết nối đang active
        self.active_connection_count = [0]  # Số lượng kết nối đang active
        
        # Load blocked IPs từ file
        self._load_blocked_ips()
        
        # Initialize managers
        self.firewall_manager = FirewallManager(self.banned_ips_string)
        # Tạo connection_manager trước để có thể pass vào block_manager
        def time_run_wrapper():
            time_run(self.elapsed_seconds)
        
        self.connection_manager = ConnectionManager(
            self.request_count_per_ip,
            self.blocked_ips,
            self.connection_keys,
            self.active_connection_count,
            config,
            None,  # block_manager sẽ được set sau
            self.firewall_manager,
            time_run_wrapper
        )
        
        self.block_manager = BlockManager(
            self.blocked_ips,
            self.banned_ips_string,
            self.elapsed_seconds,
            self.connection_keys,
            config,
            self.firewall_manager,
            self.connection_manager
        )
        # Pass request counter reference vào block_manager để có thể clear khi block
        self.block_manager.request_counter = self.request_count_per_ip
        
        # Update connection_manager với block_manager
        self.connection_manager.block_manager = self.block_manager
        
        
        self.proxy_manager = ProxyManager(config)
        self.validator = ConfigValidator()
    
    def _load_blocked_ips(self):
        """Load blocked IPs từ file block_ip.txt"""
        try:
            with open("block_ip.txt", "r") as f:
                block_ips = [str(x) for x in f.read().split(",") if x and x != "\n"]
                self.blocked_ips.update(block_ips)
                for ip in block_ips:
                    self.banned_ips_string[0] += str(",{0}".format(str(ip)))
        except FileNotFoundError:
            open("block_ip.txt", "w").write('')
    
    def initialize(self):
        """Khởi tạo và validate config"""
        # Validate config
        errors = self.validator.validate_all(self.config)
        if errors:
            print("\n>> Config file is error!")
            for error in errors:
                print(f"  - {error}")
            input()
            kill_process(self.pid)
        
        # Process proxy nếu cần
        if int(self.config.get('is_get_sock', 1)) == 1:
            proxy_ips = self.proxy_manager.process_proxy()
            if proxy_ips:
                for ip in proxy_ips:
                    self.blocked_ips.add(str(ip))
    
    def start_antiddos(self, port):
        """Khởi động Anti-DDOS cho một port"""
        from utils.helpers import clear
        
        clear()
        config = self.config
        print("\nconfig fake: {0}:{1} -> {2}:{3}".format(
            str(config.get('host_fake', '0.0.0.0')),
            str(config.get('port_fake', 80)),
            str(config.get('host_real', '127.0.0.1')),
            str(config.get('port_real', 81))
        ))
        print(f">> Starting Anti-DDOS...")
        
        Thread(target=self.connection_manager.open_port, args=(port,)).start()
        sleep(2)
        
        reset_on_time = self.config.get('reset_on_time', 60)
        while True:
            try:
                print("Cleaning up old request data...")
                # Dọn dẹp các IP không còn request trong window thay vì reset toàn bộ
                self.request_count_per_ip.cleanup_old_ips()
                sleep(float(reset_on_time))
            except KeyboardInterrupt:
                print("Stopping all connection....")
                self.connection_manager.close_conn()
                input(">> Press Enter to Exit!")
                kill_process(self.pid)
    
    def run(self):
        """Chạy chương trình chính"""
        # Setup
        system("wmic process where name=\"Anti-DDOS.exe\" CALL setpriority 256 > NUL 2>&1")
        system("title Anti-DDOS using Python3 (KhanhNguyen9872)")
        clear()
        
        # Initialize
        self.initialize()
        
        # Show menu
        from ui.menu import Menu
        menu = Menu(self)
        port_fake = self.config.get('port_fake', 80)
        menu.show_main_menu(port_fake)

