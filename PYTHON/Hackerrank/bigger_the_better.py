#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'biggerIsGreater' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING w as parameter.
#

def swap(li):
    for i in range(len(li)-1):
        if(ord(li[i])>ord(li[i+1])):
            temp=li[i]
            li[i]=li[i+1]
            li[i+1]=temp
            break
        else:
            print("TEST",li)
            swap(li)
            return(li)

def biggerIsGreater(w):
    rev=w[::-1]
    li=list(rev)
    swap(li)
    st_rev="".join(li)
    st=st_rev[::-1]
    if(st!=w):
        return(st)


if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input().strip())

    for T_itr in range(T):
        w = input()

        result = biggerIsGreater(w)
        print(result)
        #fptr.write(result + '\n')

    #fptr.close()
