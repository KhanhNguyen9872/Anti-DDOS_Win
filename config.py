## Config file

##### sorry! i'm bad english! #####

# limit speed / 1 second (user to server) (megabyte/second)
max_speed_user = 8   # 4mb/s   # 0 for unlimited

# limit speed / 1 second (server to user) (megabyte/second)
max_speed_server = 8   # 4mb/s   # 0 for unlimited

# max ip can connect in one time
# user can connect again at next time without +conn!
max_conn = 30  # 30 connection

# max send or receive data on each connection from user to server (byte)
max_data_user = 52428800  # 50mb        # use 0 for disable

# reset user send data length on [minutes], 0 for disable
reset_send_data_user = 1  # 1 minutes

########################################
# type when block user send data large
# 0 -> just disconnect user from server
# 1 -> block a ip on ram [will unblock if you close anti-tool, not write to block_ip.txt and not add rule to Windows Firewall]
# 2 -> block a ip forever [write to block_ip.txt and add to rule on Windows Firewall]
# 3 -> block a ip on time (block_time) [will unblock when out of time]
type_block_send_data = 0
########################################

# block time on [minutes] if spam or send data large than max_data_user, 0 for disable
# this will unblock after your input minutes
block_time = 30  # 30 minutes

# timeout a connection on [minutes] when user or server not send any data
# user can connect again when timeout
timeout_conn = 180  # 180 seconds

########################################
# type when block user spam
# 1 -> block a ip on ram [will unblock if you close anti-tool, not write to block_ip.txt and not add rule to Windows Firewall]
# 2 -> block a ip forever [write to block_ip.txt and add to rule on Windows Firewall]
# 3 -> block a ip on time (block_time) [will unblock when out of time]
type_block_spam = 2
########################################

# ip host fake
host_fake="0.0.0.0"

# ip host real
host_real="127.0.0.1"

# Fake port for open port firewall
port_fake=80

# Real port for your program listen port
port_real=81

# only accept 1 client in [seconds]
time_connect=0  # 0 second (recommend is 0)

# Block ip when this ip requested to fake port large than count
## WARNING! Changing to a very low value may block you and your users from the Windows VPS
block_on_count=15  # 15 times

# Time reset count [second]
reset_on_time=60  # 60 seconds

# Force add ip to windows firewall if block ip try request large than count
force_firewall_count=0 # (recommend is 0)

# Default IP Blocked
ban_ip=""

# 1 for Enable get all IP Sock for block, 0 for Disable
is_get_sock=1

headers = [
	"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36",
	"Mozilla/5.0 (Linux; Android 12; Pixel 3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/106.0.0.0 Mobile Safari/537.36",
    "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36 OPR/93.0.0.0",
    "Mozilla/5.0 (X11; Linux x86_64; rv:102.0) Gecko/20100101 Firefox/102.0",
    "Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36",
    "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36 Edg/107.0.1418.62",
    "Mozilla/5.0 (Linux; Android 12; M2101K7BG Build/SP1A.210812.016; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/106.0.5249.126 Mobile Safari/537.36 [FB_IAB/Orca-Android;FBAV/390.2.0.29.103;]",
    "Mozilla/5.0 (Linux; Android 11; SM-A315G Build/RP1A.200720.012; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/108.0.5359.128 Mobile Safari/537.36 [FB_IAB/Orca-Android;FBAV/390.2.0.29.103;]",
    "Mozilla/5.0 (Linux; Android 12; SM-A315G Build/SP1A.210812.016; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/108.0.5359.128 Mobile Safari/537.36 [FB_IAB/Orca-Android;FBAV/390.2.0.29.103}]",
    "Mozilla/5.0 (Linux; Android 12; 220733SG Build/SP1A.210812.016; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/108.0.5359.128 Mobile Safari/537.36 [FB_IAB/Orca-Android;FBAV/390.2.0.29.103;]",
]

# Custom sock4/5/http link for block
ban_sock = [
	"https://www.proxyscan.io/download?type=socks4",
	"https://raw.githubusercontent.com/HyperBeats/proxy-list/main/socks4.txt",
	"https://raw.githubusercontent.com/HyperBeats/proxy-list/main/socks5.txt",
	"https://raw.githubusercontent.com/monosans/proxy-list/main/proxies_anonymous/socks5.txt",
	"http://worm.rip/socks5.txt",
	"http://worm.rip/socks4.txt",
	"http://worm.rip/http.txt",
	"https://www.proxyscan.io/download?type=socks5",
	"https://raw.githubusercontent.com/HyperBeats/proxy-list/main/http.txt",
	"https://raw.githubusercontent.com/HyperBeats/proxy-list/main/https.txt",
	"https://raw.githubusercontent.com/monosans/proxy-list/main/proxies_anonymous/http.txt",
	"http://spys.me/proxy.txt",
	"http://rootjazz.com/proxies/proxies.txt",
	"https://www.proxyscan.io/download?type=http",
	"https://api.proxyscrape.com/?request=displayproxies&proxytype=socks5",
    "https://api.proxyscrape.com/v2/?request=displayproxies&protocol=socks4",
	"https://openproxylist.xyz/socks4.txt",
	"https://proxyspace.pro/socks4.txt",
	"https://raw.githubusercontent.com/B4RC0DE-TM/proxy-list/main/SOCKS4.txt",
	"https://raw.githubusercontent.com/jetkai/proxy-list/main/online-proxies/txt/proxies-socks4.txt",
	"https://raw.githubusercontent.com/mmpx12/proxy-list/master/socks4.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/SOCKS4_RAW.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/socks4.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/socks4.txt",
	"https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/socks4.txt",
	"https://spys.me/socks.txt",
	"https://www.proxy-list.download/api/v1/get?type=socks4",
	"https://api.proxyscrape.com/?request=displayproxies&proxytype=socks4&country=all",
	"https://api.openproxylist.xyz/socks4.txt",
	"https://api.proxyscrape.com/v2/?request=getproxies&protocol=socks5&timeout=10000&country=all&simplified=true",
	"https://www.proxy-list.download/api/v1/get?type=socks5",
	"https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/socks5.txt",
	"https://raw.githubusercontent.com/hookzof/socks5_list/master/proxy.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/socks5.txt",
	"https://raw.githubusercontent.com/jetkai/proxy-list/main/online-proxies/txt/proxies-socks5.txt",
	"https://api.openproxylist.xyz/socks5.txt",
	"https://api.proxyscrape.com/v2/?request=getproxies&protocol=socks5",
	"https://openproxylist.xyz/socks5.txt",
	"https://proxyspace.pro/socks5.txt",
	"https://raw.githubusercontent.com/B4RC0DE-TM/proxy-list/main/SOCKS5.txt",
	"https://raw.githubusercontent.com/manuGMG/proxy-365/main/SOCKS5.txt",
	"https://raw.githubusercontent.com/mmpx12/proxy-list/master/socks5.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/SOCKS5_RAW.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/socks5.txt",
	"https://api.proxyscrape.com/?request=displayproxies&proxytype=http",
	"https://www.proxy-list.download/api/v1/get?type=http",
	"https://raw.githubusercontent.com/TheSpeedX/SOCKS-List/master/http.txt",
	"https://api.openproxylist.xyz/http.txt",
	"https://raw.githubusercontent.com/shiftytr/proxy-list/master/proxy.txt",
	"http://alexa.lr2b.com/proxylist.txt",
	"https://raw.githubusercontent.com/jetkai/proxy-list/main/online-proxies/txt/proxies-http.txt",
	"https://raw.githubusercontent.com/clarketm/proxy-list/master/proxy-list-raw.txt",
	"https://raw.githubusercontent.com/sunny9577/proxy-scraper/master/proxies.txt",
	"https://raw.githubusercontent.com/opsxcq/proxy-list/master/list.txt",
	"https://proxy-spider.com/api/proxies.example.txt",
	"https://multiproxy.org/txt_all/proxy.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/HTTPS_RAW.txt",
	"https://api.proxyscrape.com/v2/?request=getproxies&protocol=http",
	"https://openproxylist.xyz/http.txt",
	"https://proxyspace.pro/http.txt",
	"https://proxyspace.pro/https.txt",
	"https://raw.githubusercontent.com/almroot/proxylist/master/list.txt",
	"https://raw.githubusercontent.com/aslisk/proxyhttps/main/https.txt",
	"https://raw.githubusercontent.com/B4RC0DE-TM/proxy-list/main/HTTP.txt",
	"https://raw.githubusercontent.com/hendrikbgr/Free-Proxy-Repo/master/proxy_list.txt",
	"https://raw.githubusercontent.com/jetkai/proxy-list/main/online-proxies/txt/proxies-https.txt",
	"https://raw.githubusercontent.com/mertguvencli/http-proxy-list/main/proxy-list/data.txt",
	"https://raw.githubusercontent.com/mmpx12/proxy-list/master/http.txt",
	"https://raw.githubusercontent.com/mmpx12/proxy-list/master/https.txt",
	"https://raw.githubusercontent.com/proxy4parsing/proxy-list/main/http.txt",
	"https://raw.githubusercontent.com/saisuiu/uiu/main/free.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/http.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/http.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/https.txt",
	"https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/http.txt",
	"https://rootjazz.com/proxies/proxies.txt",
	"https://www.proxy-list.download/api/v1/get?type=https",
	"https://raw.githubusercontent.com/UptimerBot/proxy-list/main/proxies/socks5.txt",
	"https://raw.githubusercontent.com/monosans/proxy-list/main/proxies/socks5.txt",
	"https://raw.githubusercontent.com/monosans/proxy-list/main/proxies/http.txt",
	"https://raw.githubusercontent.com/UptimerBot/proxy-list/main/proxies/http.txt",
	"https://raw.githubusercontent.com/monosans/proxy-list/main/proxies/socks4.txt",
	"https://raw.githubusercontent.com/UptimerBot/proxy-list/main/proxies/socks4.txt",
	"https://raw.githubusercontent.com/saisuiu/Lionkings-Http-Proxys-Proxies/main/free.txt",
	"https://raw.githubusercontent.com/saisuiu/Lionkings-Http-Proxys-Proxies/main/cnfree.txt",
	"https://raw.githubusercontent.com/ErcinDedeoglu/proxies/main/proxies/http.txt",
	"https://raw.githubusercontent.com/ErcinDedeoglu/proxies/main/proxies/https.txt",
	"https://raw.githubusercontent.com/ErcinDedeoglu/proxies/main/proxies/socks4.txt",
	"https://raw.githubusercontent.com/ErcinDedeoglu/proxies/main/proxies/socks5.txt",
	"https://raw.githubusercontent.com/mertguvencli/http-proxy-list/main/proxy-list/data.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/raw.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/fast.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/all.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/medium.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/new.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/premium.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/slow.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/ultrafast.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/ultraslow.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/working.txt",
	"https://raw.githubusercontent.com/MuRongPIG/Proxy-Master/main/http.txt",
	"https://raw.githubusercontent.com/MuRongPIG/Proxy-Master/main/socks4.txt",
	"https://raw.githubusercontent.com/MuRongPIG/Proxy-Master/main/socks5.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/SOCKS4_RAW.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/SOCKS5_RAW.txt",
	"https://raw.githubusercontent.com/roosterkid/openproxylist/main/HTTPS_RAW.txt",
	"https://raw.githubusercontent.com/TheSpeedX/SOCKS-List/master/socks5.txt",
	"https://raw.githubusercontent.com/TheSpeedX/SOCKS-List/master/socks4.txt",
]