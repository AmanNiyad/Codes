#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'utopianTree' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def utopianTree(n):
    if(n==0):
        return 1
    h=1
    for i in range(1,n+1):
        if(i%2==0):
            h+=1
        else:
            h=2*h
    return h
    
if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = utopianTree(n)
        print(result)

     #   fptr.write(str(result) + '\n')

   # fptr.close()
