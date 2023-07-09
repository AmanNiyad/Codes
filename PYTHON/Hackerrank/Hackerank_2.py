import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr,n):
    d1=0
    d2=0
    for i in range(n):
        for j in range(n):
            if(i==j):
                d1+=arr[i][j]
            if(i+j==n-1):
                d2+=arr[i][j]
    diff=d1-d2;
    print(abs(diff))
            



n = int(input().strip())
arr = []
for _ in range(n):
    arr.append(list(map(int, input().rstrip().split())))
result = diagonalDifference(arr,n)