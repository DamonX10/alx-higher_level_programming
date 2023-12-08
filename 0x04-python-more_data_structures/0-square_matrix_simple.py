#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    val_ = [[] for x in range(len(matrix))]

    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            val_[i].append(matrix[i][j] ** 2)
    return val_
