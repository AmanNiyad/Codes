

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    li=s.split(":")
    if("PM" in li[-1]):
        if(int(li[0])!=12):
            li[0]=str(int(li[0])+12)
        li[-1]=li[-1].rstrip((li[-1])[-1])
        li[-1]=li[-1].rstrip((li[-1])[-1])
        li=":".join(li)
        return(li)
    else:
        if(int(li[0])==12):
            li[0]="00"
        li[-1]=li[-1].rstrip((li[-1])[-1])
        li[-1]=li[-1].rstrip((li[-1])[-1])
        li=":".join(li)
        return(li)
    
    
        
s ="07:45:30PM"
result = timeConversion(s)
print(result)