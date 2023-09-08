#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'encryption' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def encryption(s):
    # Write your code here
    s_no_spaces = s.replace(" ", "")
    x = math.floor(math.sqrt(len(s_no_spaces)))
    y = math.ceil(math.sqrt(len(s_no_spaces)))

    if(x*y<len(s)):
        x+=1

    matrix = [[None for i in range(y)]for j in range(x)]

    i = 0
    for j in range(x):
        for k in range(y):
            if(i == len(s)):
                break
            else:
                matrix[j][k] = s[i]
                i += 1

    matrix[-1] = [i for i in matrix[-1] if i is not None]
    r = ""
    for i in range(len(matrix)):
        try:
            r1 = ("".join([row[i] for row in matrix]))
            r = " ".join([r,r1])
        except IndexError:
            r1 = ("".join([row[i-4] for row in matrix]))
            r = " ".join([r,r1[:-1]])

    print(r[1:])


if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = encryption(s)

    #fptr.write(result + '\n')

    #fptr.close()

