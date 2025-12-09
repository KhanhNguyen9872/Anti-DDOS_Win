## Helper utilities
from os import system
from time import sleep

def clear():
    """Clear console"""
    system("cls")

def time_run(time_count_ref):
    """Đếm thời gian chạy"""
    time_count_ref[0] = 0
    while True:
        sleep(1)
        time_count_ref[0] += 1

