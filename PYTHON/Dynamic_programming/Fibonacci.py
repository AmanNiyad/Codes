#!/usr/bin/env python3

memo={}

def fibo(n):
    if(n in memo):
        return memo[n]
    if(n<=2):
        return 1
    #x=fibo(n-1)
    #y=fibo(n-2)
    memo[n]= fibo(n-1)+fibo(n-2)
    return memo[n]

x=fibo(6)
print(x)
x=fibo(7)
print(x)
x=fibo(8)
print(x)
x=fibo(500)
print(x)