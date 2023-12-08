#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    key_lst = list(a_dictionary.keys())

    for i in key_lst:
        if value == a_dictionary[i]:
            del a_dictionary[i]
    return a_dictionary
