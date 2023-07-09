#!/usr/bin/env python3
memo={}

def gridtraveler(m,n):
    if((m,n) in memo):
        return memo[(m,n)]
    
    if(m==1 and n==1):
        return 1
    if(m==0 or n==0):
        return 0
    
    x=gridtraveler(m-1,n)
    y=gridtraveler(m,n-1)
    memo[(m,n)]= gridtraveler(m-1,n)+gridtraveler(m,n-1)
    return memo[(m,n)]


x=gridtraveler(18,18)
print(x)