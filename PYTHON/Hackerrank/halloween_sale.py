#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'howManyGames' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER p
#  2. INTEGER d
#  3. INTEGER m
#  4. INTEGER s
#

def howManyGames(p, d, m, s):
    # Return the number of games you can buy
    if(s<p):
        return(0)
    li = []
    li.append(p)
    while(True):
        if((p-d) < m):
            p = m
            break
        else:
            p -= d
            li.append(p)
    #ctr = len(li)
    #total = sum(li)

    while(sum(li)<=s-m):
        #ctr+=math.floor(s/total)
        #total+=m
        li.append(m)

    return (len(li))

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    p = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    m = int(first_multiple_input[2])

    s = int(first_multiple_input[3])

    answer = howManyGames(p, d, m, s)
    print(answer)
    #fptr.write(str(answer) + '\n')

    #fptr.close()

