#!/usr/bin/python3
def uniq_add(my_list=[]):
    set_val = 0
    for i in set(my_list):
        set_val += i
    return set_val
