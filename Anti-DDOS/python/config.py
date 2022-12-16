## Config file

# ip host fake
host_fake="0.0.0.0"

# ip host real
host_real="127.0.0.1"

# Fake port for open port firewall
port_fake=85

# Real port for your program listen port
port_real=81

# only accept 1 client in seconds
time_connect=0

# Block ip when this ip requested to fake port large than count
## WARNING! Changing to a very low value may block you and your users from the Windows VPS
block_on_count=15

# Time reset count (second)
reset_on_time=30

# Force add ip to windows firewall if block ip try request large than count
force_firewall_count=9