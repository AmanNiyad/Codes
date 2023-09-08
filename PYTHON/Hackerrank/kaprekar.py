#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'kaprekarNumbers' function below.
#
# The function accepts following parameters:
#  1. INTEGER p
#  2. INTEGER q
#

def kaprekarNumbers(p, q):
    li = []
    for i in range(p,q+1):
        if(i == 3 or i==2):
            continue
        if(i == 1):
            li.append(i)
            continue

        sqr = str(i*i)
        l = len(str(i))
        
        
        if(int(sqr[:len(sqr)-l]) + int(sqr[len(sqr)-l:]) == i):
            li.append(i)
        else:
            continue
    
    if(not li):
        print("INVALID RANGE")
    else:
        print(*li)
if __name__ == '__main__':
    p = int(input().strip())

    q = int(input().strip())

    kaprekarNumbers(p, q)

