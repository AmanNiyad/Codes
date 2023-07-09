#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

memo={}

def migratoryBirds(arr):
    for i in range(len(arr)):
        if(arr[i] in memo):
            memo[arr[i]]+=1
        else:
            memo[arr[i]]=1
    
    print(memo)
    v = list(memo.values())
    k = list(memo.keys())
    print(k[v.index(max(v))])

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    #fptr.write(str(result) + '\n')

    #fptr.close()
