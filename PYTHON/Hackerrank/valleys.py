#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingValleys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER steps
#  2. STRING path
#

def countingValleys(steps, path):
    count=0
    vals=0
    #ctr=0
    for i in path:
        #ctr+=1
        if(i=="D"):
            if(count==0):
                #print("TEST",i,"  ",ctr)
                vals+=1
                count-=1
            else:
                count-=1
        else:
            count+=1
    
    return(vals)

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)
    print(result)

    #fptr.write(str(result) + '\n')

    #fptr.close()
