#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

memo={}


def sockMerchant(n, ar):
    for i in range(n):
        if(ar[i] in memo):
            memo[ar[i]]+=1
        else:
            memo[ar[i]]=1
    
    x = list(memo.values())
    total=0
    for i in range((len(x))):
        if(x[i]%2==1):
            total+=(x[i]-1)/2
        else:
            total+=(x[i])/2
    
    return(int(total))


if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)
    print(result)

    #fptr.write(str(result) + '\n')

    #fptr.close()
