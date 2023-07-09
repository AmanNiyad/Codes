
import math
import os
import random
import re
import sys

#
# Complete the 'birthdayCakeCandles' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY candles as parameter.
#

def birthdayCakeCandles(candles):
    max1=0
    max1=max(candles)
    print(max1)
    ctr=0
    for i in candles:
        if(i==max1):
            ctr+=1
            print(i)
    
    print(ctr)


candles=[3,1,2,3]
birthdayCakeCandles(candles)
