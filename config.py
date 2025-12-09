## Config file

##### sorry! i'm bad english! #####

# max ip can connect in one time
# user can connect again at next time without +conn!
max_conn = 30  # 30 connection

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

# Socket backlog size for accept queue (higher = more concurrent connections)
socket_backlog=128  # 128 connections

# Rate limit window size in seconds (sliding window)
rate_limit_window=60  # 60 seconds

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
