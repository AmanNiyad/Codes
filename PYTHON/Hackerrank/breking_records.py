#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    min,max=0
    records=[]

    for i in range(len(scores)):
        if(i==0):
            min=max=scores[i]
        else{
            if(scores[i]>max):
                max=scores[i]
                records[0]+=1
            if(scores[i]<min):
                min=scores[i]
                records[1]+=1
        }
    return records

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)
    print(result)

    #fptr.write(' '.join(map(str, result)))
    #fptr.write('\n')

    #fptr.close()
