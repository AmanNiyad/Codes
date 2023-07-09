#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'bonAppetit' function below.
#
# The function accepts following parameters:
#  1. INTEGER_ARRAY bill
#  2. INTEGER k
#  3. INTEGER b
#

def bonAppetit(bill, k, b):
    sum1=0
    sum2=0
    for i in range(len(bill)):
        if(i!=k):
            sum1+=bill[i]
        #sum2+bill[i]
    
    if(b==(sum1/2)):
        print("Bon Appetit")
    else:
        print(int(b-(sum1/2)))

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
