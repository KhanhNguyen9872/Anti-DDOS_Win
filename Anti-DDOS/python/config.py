## Config file

# ip host fake
host_fake="0.0.0.0"

# ip host real
host_real="127.0.0.1"

# Fake port for open port firewall
port_fake=80

# Real port for your program listen port
port_real=81

# only accept 1 client in seconds
time_connect=0

# Block ip when this ip requested to fake port large than count
## WARNING! Changing to a very low value may block you and your users from the Windows VPS
block_on_count=15

# Time reset count (second)
reset_on_time=60

# Force add ip to windows firewall if block ip try request large than count
force_firewall_count=0

# Default IP Blocked
ban_ip="1.116.218.46/32,5.44.42.40/32,5.253.30.82/32,14.225.238.153/32,23.237.26.69/32,24.86.248.28/32,34.231.126.12/32,35.197.10.99/32,35.221.248.87/32,39.106.209.134/32,45.33.50.110/32,45.76.118.224/32,45.77.19.32/32,45.80.128.15/32,47.96.79.76/32,47.101.65.208/32,47.105.221.174/32,49.50.84.54/32,50.7.8.99/32,50.7.114.87/32,51.15.179.93/32,51.158.147.91/32,61.164.253.69/32,65.20.71.66/32,68.183.62.218/32,77.75.230.51/32,78.153.130.65/32,81.4.125.158/32,82.157.16.56/32,88.119.179.10/32,88.198.46.51/32,91.231.182.39/32,93.123.16.89/32,95.216.93.66/32,103.57.222.209/32,112.85.231.135/32,116.203.131.24/32,120.79.217.127/32,120.195.6.148/32,128.199.126.228/32,134.175.60.96/32,139.59.35.197/32,144.202.112.137/32,147.78.2.180/32,147.135.22.28/32,147.135.231.100/32,165.227.48.82/32,167.235.135.184/32,168.235.67.174/32,169.54.194.61/32,173.255.209.253/32,174.137.48.255/32,178.17.171.235/32,179.43.148.195/32,181.214.197.192/32,185.4.29.168/32,185.25.204.60/32,185.37.147.117/32,185.83.213.25/32,185.86.77.126/32,185.93.245.159/32,185.105.238.209/32,185.106.103.26/32,185.120.77.165/32,185.123.101.33/32,185.130.104.238/32,185.138.164.21/32,185.140.251.177/32,185.143.223.66/32,185.169.54.231/32,185.209.161.169/32,185.230.210.252/32,185.241.124.155/32,185.243.217.223/32,188.68.231.19/32,192.95.19.164/32,192.165.67.112/32,194.26.229.20/32,194.146.57.64/32,196.46.190.56/32,198.71.63.181/32,198.199.98.246/32,221.229.173.69/32,45.77.19.32/32,35.197.10.99/32,144.202.112.137/32,173.255.209.253/32,139.59.35.197/32,192.165.67.112/32,50.7.8.99/32,141.138.203.105/32,34.73.148.139/32"

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
	"https://openproxy.space/list/socks4",
	"https://openproxy.space/list/socks5",
	"https://openproxy.space/list/http",
	"https://api.proxyscrape.com/v2/?request=getproxies&protocol=socks4",
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
	"https://www.freeproxychecker.com/result/socks4_proxies.txt",
	"https://www.freeproxychecker.com/result/socks5_proxies.txt",
	"http://www.socks24.org/feeds/posts/default",
	"https://www.freeproxychecker.com/result/http_proxies.txt",
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
	"https://raw.githubusercontent.com/UserR3X/proxy-list/main/online/http.txt",
	"https://raw.githubusercontent.com/UserR3X/proxy-list/main/online/https.txt",
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
	"https://raw.githubusercontent.com/RX4096/proxy-list/main/online/http.txt",
	"https://raw.githubusercontent.com/RX4096/proxy-list/main/online/https.txt",
	"https://raw.githubusercontent.com/saisuiu/uiu/main/free.txt",
	"https://raw.githubusercontent.com/saschazesiger/Free-Proxies/master/proxies/http.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/http.txt",
	"https://raw.githubusercontent.com/ShiftyTR/Proxy-List/master/https.txt",
	"https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/http.txt",
	"https://rootjazz.com/proxies/proxies.txt",
	"https://sheesh.rip/http.txt",
	"https://www.proxy-list.download/api/v1/get?type=https",
]