#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumDistances' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def minimumDistances(a):
    li = []
    for i in range(len(a)):
        try:
           li.append((a[(i+1):].index(a[i]))+1)
        except ValueError:
            continue
    if(len(li) == 0):
        return(-1)
    else:
        return(min(li))

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)
    print(result)
    #fptr.write(str(result) + '\n')

    #fptr.close()

