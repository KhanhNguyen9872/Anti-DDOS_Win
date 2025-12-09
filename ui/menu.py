## Menu UI
from os import system
from utils.helpers import clear
from utils.admin import kill_process

class Menu:
    """Giao diện menu chính"""
    
    def __init__(self, antiddos_instance):
        """
        Args:
            antiddos_instance: AntiDDOS instance
        """
        self.antiddos = antiddos_instance
    
    def about(self):
        """Menu About"""
        while True:
            clear()
            user_choice = str(input("KhanhNguyen9872\n\n1. Facebook\n2. Youtube\n3. Github\n0. Back\n\n Your choose: "))
            if (user_choice == "1"):
                system("start \"\" \"https://fb.me/khanh10a1\"")
            elif (user_choice == "2"):
                system("start \"\" \"https://youtube.com/@KhanhNguyen9872_Official_v2\"")
            elif (user_choice == "3"):
                system("start \"\" \"https://github.com/KhanhNguyen9872\"")
            elif (user_choice == "0"):
                break
    
    def start(self, port):
        """Khởi động Anti-DDOS"""
        clear()
        config = self.antiddos.config
        print("\nconfig fake: {0}:{1} -> {2}:{3}".format(
            str(config.get('host_fake', '0.0.0.0')),
            str(config.get('port_fake', 80)),
            str(config.get('host_real', '127.0.0.1')),
            str(config.get('port_real', 81))
        ))
        print(f">> Starting Anti-DDOS...")
        self.antiddos.start_antiddos(port)
    
    def show_main_menu(self, port_fake):
        """Hiển thị menu chính"""
        from threading import Thread
        from time import sleep
        
        clear()
        print("Warning: This tool only Anti-DDOS TCP Port, please block all UDP Port, because your server may be UDPFlood!\n")
        input("Press Enter to continue! ")
        
        try:
            while True:
                clear()
                print("\n1. Anti-DDOS [Fake Port {0}]\n2. Remove All Block IP [Port {0}]\n3. About\n0. Exit\n\n".format(str(port_fake)))
                user_choice = str(input(">> Your choose: "))
                if (user_choice == "1"):
                    self.start(port_fake)
                elif (user_choice == "2"):
                    self.antiddos.firewall_manager.remove_block(port_fake)
                elif (user_choice == "3"):
                    self.about()
                elif (user_choice == "0"):
                    kill_process()
                continue
        except KeyboardInterrupt:
            print("Stopping all connection....")
            self.antiddos.connection_manager.close_conn()
            input(">> Press Enter to Exit!")
            kill_process()

