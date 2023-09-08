#!/bin/python3

import math
import os
import random
import re
import sys
 

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#
ONES = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]  
TEENS = ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]  
TENS = ["", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]  
def convert_to_words(num):  
    if num == 0:  
        return "zero"  
    elif num< 0:  
        return "minus " + convert_to_words(abs(num))  
    elif num< 10:  
        return ONES[num]  
    elif num< 20:  
        return TEENS[num - 10]  
    elif num< 100:  
        return TENS[num // 10] + (" " + convert_to_words(num % 10) if num % 10 != 0 else "")  
    elif num< 1000:  
        return ONES[num // 100] + " hundred" + (" and " + convert_to_words(num % 100) if num % 100 != 0 else "")  
    elif num< 1000000:  
        return convert_to_words(num // 1000) + " thousand" + (" " + convert_to_words(num % 1000) if num % 1000 != 0 else "")  
    elif num< 1000000000:  
        return convert_to_words(num // 1000000) + " million" + (" " + convert_to_words(num % 1000000) if num % 1000000 != 0 else "")  
    else:  
        return "number out of range"  

def timeInWords(h, m):

    if(m>=1 and m<=30):
        min = convert_to_words(m)  
        hrs = convert_to_words(h)  
        if(m == 15):
            return("quater past {}".format(hrs))
        elif(m ==30):
            return("half past {}".format(hrs))
        else:
            return("{} minutes past {}".format(min,hrs))
    elif(m>=31 and m<=59):
        min = convert_to_words(60-m)  
        hrs = convert_to_words(h+1)  
        if(m == 45):
            return("quater to {}".format(hrs))
        else:
            return("{} minutes to {}".format(min,hrs))
    else:
        hrs = convert_to_words(h)  
        return("{} o' clock".format(hrs))

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = int(input().strip())

    m = int(input().strip())

    result = timeInWords(h, m)
    print(result)

    #fptr.write(result + '\n')

# fptr.close()
