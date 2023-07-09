#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    li=[]
    new = []

    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if(len(new)==0):
                new.append(a[j])
            for k in range(len(a)):
                if(k>=len(new)):
                    continue
                if(abs(a[i]-new[k])<=1):
                    new.append(a[j])
        li.append(new)
        new=[]
    print(li)

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    #fptr.write(str(result) + '\n')

    #fptr.close()
