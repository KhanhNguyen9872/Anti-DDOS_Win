## Proxy manager
from os import remove
from random import choice
import requests
import urllib3

# Tắt warning về SSL verification
urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

class ProxyManager:
    """Quản lý proxy list"""
    
    def __init__(self, config):
        """
        Args:
            config: Config dict
        """
        self.config = config
        self.headers = config.get('headers', [])
        self.proxy_urls_file = "proxy_url.txt"
        self.proxy_urls = self._load_proxy_urls()
    
    def _load_proxy_urls(self):
        """Load danh sách proxy URLs từ file proxy_url.txt"""
        try:
            with open(self.proxy_urls_file, "r", encoding='utf-8') as f:
                urls = [line.strip() for line in f.readlines() if line.strip()]
            return urls
        except FileNotFoundError:
            # Nếu file không tồn tại, trả về list rỗng
            return []
    
    def _save_proxy_urls(self, urls):
        """Lưu danh sách proxy URLs vào file"""
        try:
            with open(self.proxy_urls_file, "w", encoding='utf-8') as f:
                for url in urls:
                    f.write(url.strip() + "\n")
        except Exception:
            pass
    
    def _remove_dead_proxy_url(self, dead_url):
        """Xóa proxy URL chết khỏi file"""
        if dead_url in self.proxy_urls:
            self.proxy_urls.remove(dead_url)
            self._save_proxy_urls(self.proxy_urls)
            print(f"  -> Removed dead URL: {dead_url}")
    
    def _is_network_error(self, exception):
        """Kiểm tra xem lỗi có phải do mạng không (không xóa URL nếu là lỗi mạng)"""
        error_str = str(exception).lower()
        # Các lỗi mạng phổ biến (không xóa URL)
        network_error_keywords = [
            'name or service not known',  # DNS error
            'nodename nor servname provided',  # DNS error
            'getaddrinfo failed',  # DNS error
            'network is unreachable',  # Network unreachable
            'no route to host',  # No route
            'connection refused',  # Có thể là lỗi mạng hoặc server, nhưng thường là server
        ]
        
        # Nếu là ConnectionError nhưng không phải DNS error thì có thể là server error
        if isinstance(exception, requests.exceptions.ConnectionError):
            # Kiểm tra xem có phải DNS error không
            for keyword in network_error_keywords[:3]:  # Chỉ check DNS errors
                if keyword in error_str:
                    return True
            # ConnectionError khác có thể là server error
            return False
        
        # Timeout có thể do mạng chậm hoặc server không phản hồi
        # Nhưng thường là server không phản hồi nên xóa
        if isinstance(exception, requests.exceptions.Timeout):
            return False
        
        # HTTP errors (4xx, 5xx) là server errors -> xóa
        if isinstance(exception, requests.exceptions.HTTPError):
            return False
        
        return False
    
    def load_proxy_from_file(self):
        """Load proxy từ file proxied.txt"""
        from utils.helpers import clear
        try:
            with open("proxied.txt", "r", encoding='utf-8') as f:
                file_lines = f.readlines()
            
            while True:
                clear()
                user_input = str(input("Found: proxied.txt\nNote: Y for load proxy, N for download new sock proxy\n>> Do you want to load proxy from this file? [Y/N]: "))
                if (user_input == "Y") or (user_input == "y"):
                    proxy_ips = []
                    for line in file_lines:
                        proxy_ip = line.strip()
                        if proxy_ip and proxy_ip not in proxy_ips:
                            proxy_ips.append(proxy_ip)
                    print("\nTotal IP Sock: {} IP".format(str(len(proxy_ips))))
                    print("Real IP Sock: {} IP".format(str(len(list(set(proxy_ips))))))
                    input("Press Enter to Start!")
                    return proxy_ips
                elif (user_input == "N") or (user_input == "n"):
                    return None
        except FileNotFoundError:
            return None
    
    def download_proxy(self):
        """Download proxy từ các nguồn"""
        import sys
        print("Downloading Sock Proxy....")
        total_ip_count = 0
        proxy_ips = []
        dead_urls = []
        
        for proxy_url in self.proxy_urls:
            ip_count_from_url = 0
            print("GET: {}".format(proxy_url), end=" ")
            sys.stdout.flush()
            try:
                # Sử dụng requests thay vì curl
                headers = {
                    'User-Agent': choice(self.headers)
                }
                response = requests.get(
                    proxy_url,
                    headers=headers,
                    verify=False,  # -k flag trong curl (bỏ qua SSL verification)
                    allow_redirects=True,  # -L flag trong curl (follow redirects)
                    timeout=15,  # --connect-timeout 15
                    stream=False
                )
                response.raise_for_status()
                
                # Parse response content
                content = response.text.replace("\r", "")
                proxy_lines = content.split("\n")
                
                if (len(proxy_lines) > 1):
                    for proxy_line in proxy_lines:
                        try:
                            # Xử lý các định dạng proxy khác nhau (IP:PORT hoặc IP:PORT:USER:PASS)
                            proxy_line = proxy_line.strip().replace("\"", " ").split(",")[0]
                            if not proxy_line:
                                continue
                            
                            ip_address = str(proxy_line.split(":")[0]).strip()
                            # Validate IP address
                            int("".join(ip_address.split(".")))
                            if ip_address and len(ip_address.split(".")) == 4:
                                proxy_ips.append(ip_address)
                                ip_count_from_url += 1
                        except:
                            continue
                    
                    if ip_count_from_url > 0:
                        print("(OK - {} IP)".format(str(ip_count_from_url)))
                        total_ip_count += ip_count_from_url
                    else:
                        print("(DIED - No valid IP)")
                        dead_urls.append(proxy_url)
                else:
                    print("(DIED - Empty response)")
                    dead_urls.append(proxy_url)
                    
            except requests.exceptions.RequestException as e:
                # Kiểm tra xem có phải lỗi mạng không
                if self._is_network_error(e):
                    print("(NETWORK ERROR - Skipped)")
                else:
                    print("(DIED)")
                    dead_urls.append(proxy_url)
            except Exception as e:
                print("(ERROR)")
                # Không xóa nếu là lỗi không xác định (có thể là lỗi mạng)
        
        # Xóa các URL chết khỏi file
        for dead_url in dead_urls:
            self._remove_dead_proxy_url(dead_url)
        
        proxy_ips = list(set(proxy_ips))
        print("\nTotal IP Sock: {} IP".format(str(total_ip_count)))
        print("Real IP Sock: {} IP".format(str(len(proxy_ips))))
        
        user_input = str(input("\nNOTE: Y for save to file, N for skip save\n>> Do you want to save Real IP? [Y/N]: "))
        while True:
            if (user_input == "Y") or (user_input == "y"):
                with open("proxied.txt", "w", encoding='utf-8') as f:
                    for proxy_ip in proxy_ips:
                        f.write(str(proxy_ip) + "\n")
                break
            elif (user_input == "N") or (user_input == "n"):
                try:
                    remove("proxied.txt")
                except:
                    pass
                break
        
        return proxy_ips
    
    def process_proxy(self):
        """Xử lý proxy: load từ file hoặc download mới"""
        is_get_sock = self.config.get('is_get_sock', 1)
        if int(is_get_sock) != 1:
            return []
        
        proxy_ips = self.load_proxy_from_file()
        if proxy_ips is None:
            proxy_ips = self.download_proxy()
        
        if proxy_ips:
            print("Processing IP....")
            return proxy_ips
        return []

