#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
    i=0
    e=100
    while(True):
        i=(i+k)%n
        cl=c[i]
        if(i==0 and c[0]==1):
            e-=3
            break
        elif(i==0 and c[0]==0):
            e-=1
            break
        if(cl==1):
            e-=3
        else:
            e-=1
        print(e)
    return e
if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c, k)
    print(result)
    #fptr.write(str(result) + '\n')

    #fptr.close()
