#!/usr/bin/python3
def weight_average(my_list=[]):
    val_ = []
    value_div = 0
    if len(my_list) == 0:
        return 0
    else:
        for i in my_list:
            val_.append(i[0] * i[1])
        for i in my_list:
            value_div += i[1]
        total_ = sum(val_)/value_div
        return total_
