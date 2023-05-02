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
    if (get_fb == "https://fb.me/khanh10a1"):
        def time_run():
            global time_count
            time_count=0
            while 1:
                sleep(1)
                time_count+=1
        def block_with_time(ip,time,is_add=1):
            global block,time_count
            if is_add==1:
                block.append(ip)
            while time_count<=time:
                sleep(1)
            while ip in block:
                block.remove(ip)
            print("Unblock: {} (Out of time)".format(ip))
            return
        def kill_process():
            print(f"\nClosing process....")
            if hasattr(signal, 'SIGKILL'):
                kill(pid, signal.SIGKILL)
            else:
                kill(pid, signal.SIGABRT)
            sys.exit()
        def clear():
            system("cls")
        def forward(ip,port,source,destination,is_a,is_user_send,b=""):
            global time_count,block
            len_data = -1
            if reset_send_data_user!=0:
                time=time_count+(reset_send_data_user*60)
            else:
                time=-1
            try:
                string = " "
                while string:
                    if len_data<max_data_user:
                        string = source.recv(65535)
                        if string:
                            if max_data_user>0 or is_user_send==0:
                                len_data+=len(string)
                            destination.sendall(string)
                        else:
                            source.shutdown(socket.SHUT_RD)
                            destination.shutdown(socket.SHUT_WR)
                    else:
                        print("Out of data on {} min: Port {} from {} ({} byte)".format(reset_send_data_user,port,ip,max_data_user))
                        #if block_time!=0:
                            #Thread(target=block_with_time,args=(ip,time_count+(block_time*60))).start()
                        if type_block_send_data!=0:
                            block.append(ip)
                            block_ip(ip,port,source,1)
                        break
                    if time==-1:
                        continue
                    elif time_count>time:
                        time=time_count+(reset_send_data_user*60)
                        len_data=0
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
            if is_a==1:
                global count_conn
                count_conn-=1
                all_conn.remove("conn_"+str(ip)+str(b))
                del globals()["conn_"+str(ip)+str(b)]
            try:
                source.shutdown(socket.SHUT_RD)
                destination.shutdown(socket.SHUT_WR)
            except:
                return

        def close_conn():
            global all_conn, soc
            try:
                soc.close()
            except:
                pass
            for i in all_conn:
                try:
                    globals()[i].close()
                except:
                    pass
            return

        def block_ip(con_ip,port,a,z=0):
            global ddos, force_block, list_ban_ip, time_count, all_conn
            force_block[con_ip]=0
            if (type_block_spam==2 and z==0) or (type_block_send_data==2 and z==1):
                print("Block IP forever: {}".format(con_ip))
                if (len(list_ban_ip)<8111):
                    list_ban_ip+=str(","+con_ip)
                add_ip_rule(port)
                with open("block_ip.txt","a") as f:
                    f.write(",{},\n".format(con_ip))
            elif (type_block_spam==3 and z==0) or (type_block_send_data==3 and z==1):
                if block_time!=0:
                    print("Block {} for {} minutes".format(con_ip,block_time))
                    Thread(target=block_with_time, args=(con_ip,time_count+(block_time*60),0)).start()
            else:
                print("Block on ram: {}".format(con_ip))
            print("Close all connection from {}".format(con_ip))
            try:
                a.close()
            except:
                pass
            for i in [s for s in all_conn if "conn_{}".format(con_ip) in s]:
                try:
                    all_conn.remove(i)
                except:
                    pass
                try:
                    globals()[i].close()
                except:
                    pass
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
            return

        def add_ip_rule(port):
            global list_ban_ip
            if (len(list_ban_ip)<8111):
                _=Popen("netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"".format(str(port),str(list_ban_ip)),shell=True,stdin=PIPE,stdout=DEVNULL)
            return

        def open_port(port):
            global ddos, block, force_block, list_ban_ip, max_conn, count_conn, all_conn, soc
            current_conn=[]
            all_conn=[]
            count=0
            count_conn=0
            soc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            try:
                soc.bind((str(host_fake), int(port)))
                soc.listen(9)
                create_rule(port)
                Thread(target=time_run, args=()).start()
                print(">> Started! (KhanhNguyen9872)")
                while 1:
                    try:
                        a,b = soc.accept()
                        if (b[0] in block):
                            a.close()
                            if (force_firewall_count>0):
                                try:
                                    force_block[b[0]]+=1
                                except:
                                    force_block[b[0]]=1
                                if (force_block[b[0]]>force_firewall_count):
                                    print("!! Detected {0} try request {1} times! Blocking...".format(str(b[0]),str(force_block[con_ip])))
                                    Thread(target=block_ip, args=(b[0],port,a)).start()
                                    force_block[b[0]]=0
                                    continue
                                print("Blocked connection from {0} ({1})".format(b[0],force_block[b[0]]))
                            else:
                                print("Blocked connection from {0}".format(b[0]))
                        else:
                            if (count_conn<=max_conn) or (b[0] in current_conn):
                                try:
                                    ddos[b[0]]+=1
                                except KeyError:
                                    ddos[b[0]]=1
                                try:
                                    if (ddos[b[0]]>block_on_count):
                                        print("!! Detected DDOS from {}! Blocking...".format(b[0]))
                                        block.append(b[0])
                                        Thread(target=block_ip, args=(b[0],port,a)).start()
                                        continue
                                except:
                                    ddos[b[0]]=1
                                if b[0] not in current_conn:
                                    count_conn+=1
                                    is_a=1
                                else:
                                    is_a=0
                                current_conn.append(b[0])
                                all_conn.append("conn_"+str(b[0])+str(b[1]))
                                globals()["conn_"+str(b[0])+str(b[1])]=a
                                count+=1
                                print(f"{count}. Port {port} -> {port_real} | Accept: {b[0]} ({ddos[b[0]]})")
                                server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                                server_socket.settimeout(5)
                                server_socket.connect((str(host_real), int(port_real)))
                                server_socket.settimeout(timeout_conn)
                                a.settimeout(timeout_conn)
                                Thread(target=forward, args=(b[0],port,a,server_socket,1,is_a,b[1])).start()
                                Thread(target=forward, args=(b[0],port,server_socket,a,0,0)).start()
                            else:
                                print("Full connection {}".format(b[0]))
                                a.close()
                        sleep(float(time_connect))
                    except OSError as e:
                        if '[closed]' not in str(soc):
                            print(f"ERROR: Port {port} | {e}")
                            a.close()
                            continue
                        break
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
                    print("Stopping all connection....")
                    close_conn()
                    input(">> Press Enter to Exit!")
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
                    print("ip fake or real may be not correct!")
                    _=int("KhanhNguyen9872")
                if int(timeout_conn)<1:
                    print("timeout conn should not be less than 1")
                    _=int("KhanhNguyen9872")
                if int(type_block_send_data)==0 or int(type_block_send_data)==1 or int(type_block_send_data)==2 or int(type_block_send_data)==3:
                    pass
                else:
                    print("type block send data must be 0 or 1 or 2 or 3")
                    _=int("KhanhNguyen9872")
                if int(type_block_spam)==1 or int(type_block_spam)==2 or int(type_block_spam)==3:
                    pass
                else:
                    print("type block spam must be 1 or 2 or 3")
                    _=int("KhanhNguyen9872")
                if int(reset_send_data_user)<0:
                    print("reset send data user should not be less than 0")
                    _=int("KhanhNguyen9872")
                if int(max_conn)<1:
                    print("max conn should not be less than 1")
                    _=int("KhanhNguyen9872")
                if int(max_data_user)<0:
                    print("max data should not be less than 0")
                    _=int("KhanhNguyen9872")
                if int(port_real)<1 and int(port_real)>65535:
                    print("Port real must in range 1-65535")
                    _=int("KhanhNguyen9872")
                if int(port_fake)<1 and int(port_fake)>65535:
                    print("Port fake must in range 1-65535")
                    _=int("KhanhNguyen9872")
                if int(port_fake)==int(port_real):
                    print("Port fake and real must not the same!")
                    _=int("KhanhNguyen9872")
                if float(time_connect)<0:
                    print("time connect should not be less than 0")
                    _=int("KhanhNguyen9872")
                if int(block_on_count)<1:
                    print("Block on count should not be less than 1")
                    _=int("KhanhNguyen9872")
                if int(reset_on_time)<1:
                    print("Reset on time should not be less than 1")
                    _=int("KhanhNguyen9872")
                if int(is_get_sock)==1 or int(is_get_sock)==0:
                    pass
                else:
                    print("is get sock must be 0 or 1")
                    _=int("KhanhNguyen9872")
                _=ban_sock
                _=headers
            except:
                print("\n>> Config file is error!")
                input()
                kill_process()
            try:
                with open("block_ip.txt","r") as f:
                    block=[str(x) for x in f.read().split(",") if x and x!="\n"]
            except FileNotFoundError:
                open("block_ip.txt","w").write('')
                block=[]
            for i in block:
                list_ban_ip+=str(",{0}".format(str(i)))
            if (int(is_get_sock)==1):
                try:
                    with open("proxy.txt","r") as f:
                        while 1:
                            system("cls")
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
            clear()
            print("Warning: This tool only Anti-DDOS TCP Port, please block all UDP Port, because your server may be UDPFlood!\n")
            input("Press Enter to continue! ")
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
                print("Stopping all connection....")
                close_conn()
                input(">> Press Enter to Exit!")
                kill_process()
        else:
            print("\n>> This tool work only on Windows!\n")
            kill_process()
    else:
        print(">> Facebook Admin is error!")
        input()
        sys.exit()