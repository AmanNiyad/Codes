#!/usr/bin/env python3
memo={}

def cansum(target,numbers):
    if(target==3):
        return True
    if(target==0):
        return True
    if(target<0):
        return False
    
    remainder=0
    
    for num in numbers:
        remainder= target-num
        
        if(cansum(remainder,numbers)==True):
            memo[target]=True
            return True
    
    memo[target]=False
    return False


x=cansum(400,[2,3,4,7])
print(x)
