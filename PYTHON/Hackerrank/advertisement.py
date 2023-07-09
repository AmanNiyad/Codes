#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'viralAdvertising' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def viralAdvertising(n):
    liked=0
    total=0
    for i in range(1,n+1):
        if(i==1):
            liked=2
        else:
            shared=liked*3
            liked=math.floor(shared/2)
        total+=liked
    return(total)

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = viralAdvertising(n)
    print(result)

    #fptr.write(str(result) + '\n')

    #fptr.close()
