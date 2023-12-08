#!/usr/bin/python3
def search_replace(my_list, search, replace):
    new_lst = []
    for i in my_list:
        if i == search:
            new_lst.append(replace)
        else:
            new_lst.append(i)
    return new_lst
