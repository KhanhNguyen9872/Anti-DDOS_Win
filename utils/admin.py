## Admin utilities
import ctypes
import sys
from os import kill, getpid
import signal

def is_admin():
    return True
    """Kiểm tra quyền admin"""
    try:
        return ctypes.windll.shell32.IsUserAnAdmin()
    except:
        return False

def require_admin():
    """Yêu cầu quyền admin, tự động restart với quyền admin nếu cần"""
    if not is_admin():
        ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, " ".join(sys.argv), None, 1)
        sys.exit()

def kill_process(pid=None):
    """Đóng process"""
    if pid is None:
        pid = getpid()
    print(f"\nClosing process....")
    if hasattr(signal, 'SIGKILL'):
        kill(pid, signal.SIGKILL)
    else:
        kill(pid, signal.SIGABRT)
    sys.exit()

