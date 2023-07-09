#!/bin/python3
#x2=d2[2]*365+sum(count[0:d2[1]])+d2[0]+lp2

import math
import os
import random
import re
import sys

#
# Complete the 'libraryFine' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER d1
#  2. INTEGER m1
#  3. INTEGER y1
#  4. INTEGER d2
#  5. INTEGER m2
#  6. INTEGER y2
#

count=[31, 28, 31, 30, 31, 30, 31,31,30,31,30,31]

def libraryFine(d1, m1, y1, d2, m2, y2):
    year=[y1,y2]
    lp={}
    lp[0]=0
    lp[1]=0
    for i in range(2):
        for j in range(year[i]):
            if(j%100!=0):
                if(j%4==0):
                    lp[i]+=1
            else:
                if(j%400==0):
                    lp[i]+=1
    x1=y1*365+sum(count[0:m1])+d1+lp[0]
    x2=y2*365+sum(count[0:m2])+d2+lp[1]
    days=x1-x2

    if(days<0):
        return 0
    elif(m1==m2 and y1==y2):
        return days*15
    elif(y1==y2):
        return 500*(m1-m2)
    else:
        return 10000
if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    d1 = int(first_multiple_input[0])

    m1 = int(first_multiple_input[1])

    y1 = int(first_multiple_input[2])

    second_multiple_input = input().rstrip().split()

    d2 = int(second_multiple_input[0])

    m2 = int(second_multiple_input[1])

    y2 = int(second_multiple_input[2])

    result = libraryFine(d1, m1, y1, d2, m2, y2)

    #fptr.write(str(result) + '\n')

    #fptr.close()
