#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'beautifulTriplets' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER d
#  2. INTEGER_ARRAY arr
#

def beautifulTriplets(d, arr):
    li = []
    li_1 = []
    for i in range(len(arr)):
        li_1.append(i)
        for j in range(i+1,len(arr)):
            if(arr[j]>arr[i] and len(li_1)<3):
                li_1.append(arr[j])
        li.append(li_1)
    print(li)
if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = beautifulTriplets(d, arr)

    #fptr.write(str(result) + '\n')

    #fptr.close()

