#!/usr/bin/env python3
memo={}

def howsum(target,numbers):
    if(target in memo):
        return memo[target]
    if(target==0):
        return []
    if(target<0):
        return None
    
    
    
    for num in numbers:
        remainder=target-num
        res=howsum(remainder,numbers)
        if(res!=None):
            memo[target]=(res+[num])
            return(res+[num])
    
    memo[target]=None
    return None


    


x=howsum(7,[5,3,4,7])
print(x)
print(memo)