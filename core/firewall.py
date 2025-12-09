## Firewall manager
from subprocess import Popen, PIPE
from time import sleep
try:
    from subprocess import DEVNULL
except ImportError:
    from os import devnull
    DEVNULL = open(devnull, 'wb')

class FirewallManager:
    """Quản lý Windows Firewall rules"""
    
    def __init__(self, banned_ips_string_ref):
        """
        Args:
            banned_ips_string_ref: Reference đến chuỗi IP bị ban (list để có thể modify)
        """
        self.banned_ips_string_ref = banned_ips_string_ref
    
    def create_rule(self, port):
        """Tạo rule firewall"""
        banned_ips_string = self.banned_ips_string_ref[0]
        check_cmd = "netsh advfirewall firewall show rule name=\"Khanh {0}\"".format(str(port))
        check_result = Popen(check_cmd, shell=True, stdout=PIPE).stdout.read().decode().split("\r\n")[1][:2]
        
        if check_result == "No":
            add_cmd = "netsh advfirewall firewall add rule name= \"Khanh {0}\" dir=in action=block profile=any protocol=TCP localport={0} localip=any remoteip=\"{1}\"".format(str(port), str(banned_ips_string))
            Popen(add_cmd, shell=True, stdout=DEVNULL)
        else:
            set_cmd = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port), str(banned_ips_string))
            Popen(set_cmd, shell=True, stdin=PIPE, stdout=DEVNULL)
            sleep(2)
            # Lấy IP hiện tại từ firewall rule
            show_result = Popen(check_cmd, shell=True, stdout=PIPE).stdout.read().decode().split("\r\n")[8].split()[1]
            existing_ip = str(show_result).replace("/32", "")
            banned_ips_string += "," + existing_ip
            banned_ips_string = str(",".join(list(set(banned_ips_string.split(",")))))
            set_cmd = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port), str(banned_ips_string))
            Popen(set_cmd, shell=True, stdin=PIPE, stdout=DEVNULL)
            self.banned_ips_string_ref[0] = banned_ips_string
        
        enable_cmd = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new enable=yes".format(str(port))
        Popen(enable_cmd, shell=True, stdin=PIPE, stdout=DEVNULL)
    
    def add_ip_rule(self, port):
        """Thêm IP vào rule firewall"""
        banned_ips_string = self.banned_ips_string_ref[0]
        if (len(banned_ips_string) < 8111):
            set_cmd = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port), str(banned_ips_string))
            Popen(set_cmd, shell=True, stdin=PIPE, stdout=DEVNULL)
    
    def remove_block(self, port):
        """Xóa tất cả block IP từ firewall"""
        from utils.helpers import clear
        while True:
            clear()
            a=str(input("Are you sure to remove all block IP? [Y/N]: "))
            if (a=="Y") or (a=="y"):
                _=Popen("netsh advfirewall firewall delete rule name=\"Khanh {}\" dir=in".format(str(port)),shell=True,stdin=PIPE,stdout=DEVNULL)
                print("Remove All Block IP from [Port {}] completed!\n".format(str(port)))
                input("Press Enter to Exit!")
                break
            elif (a=="N") or (a=="n"):
                break

