if (__name__ == "__main__"):
    import sys
    from os import name
    
    # Kiểm tra và yêu cầu quyền admin
    from utils.admin import require_admin, kill_process
    require_admin()
    
    # Kiểm tra Windows OS
    if name != 'nt':
        print("\n>> This tool work only on Windows!\n")
        kill_process()
    
    # Import config
    try:
        from config import *
        # Chuyển config thành dict để dễ quản lý
        config = {
            'max_conn': max_conn,
            'type_block_send_data': type_block_send_data,
            'type_block_spam': type_block_spam,
            'block_time': block_time,
            'timeout_conn': timeout_conn,
            'host_fake': host_fake,
            'host_real': host_real,
            'port_fake': port_fake,
            'port_real': port_real,
            'time_connect': time_connect,
            'block_on_count': block_on_count,
            'reset_on_time': reset_on_time,
            'socket_backlog': socket_backlog,
            'rate_limit_window': rate_limit_window,
            'ban_ip': ban_ip,
            'is_get_sock': is_get_sock,
            'headers': headers
        }
    except Exception as e:
        print(">> config.py not found or syntax error!")
        print(f"Error: {e}")
        input()
        sys.exit()
    
    # Khởi chạy Anti-DDOS
    from core.antiddos import AntiDDOS
    app = AntiDDOS(config)
    app.run()
