#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#

def pageCount(n, p):
    front=math.floor(p/2)
    if(n==p):
        return 0
    if((n%2)==0):
        back=math.ceil((n-p)/2)
    else:
        back=math.floor((n-p)/2)
    
    if(front<back):
        return front
    else:
        return back

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = int(input().strip())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()


