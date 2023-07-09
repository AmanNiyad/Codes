#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'connectedCell' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY matrix as parameter.
#
seen={}

def di(m,n):
    for i in range(n):
        for j in range(m):
            seen[(i,j)]=False




def dfs(i,j,res,m,n):
    if(i>=n or j>=m or i<0 or j<0):
        return res
    if(seen[(i,j)]==True):
        return res

    if(matrix[i][j]==0):
        return res


    if(matrix[i][j]==1):
        seen[(i,j)]=True
        res+=1
        res=dfs(i,j+1,res,m,n)
        res=dfs(i,j-1,res,m,n)
        res=dfs(i-1,j,res,m,n)
        res=dfs(i+1,j,res,m,n)

    return(res)


def connected(matrix,m,n):
    res=0
    vals=[]
    for i in range(n):
        for j in range(m):
            if(matrix[i][j]==1):
                x=(dfs(i,j,res,m,n))
                vals.append(x)
    
    return (max(vals))

    
if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    m = int(input())
    
    di(m,n)

    matrix = []

    for _ in range(n):
        matrix.append(list(map(int, input().rstrip().split())))



    result = connected(matrix,m,n)
    print(result)

    #fptr.write(str(result) + '\n')

    #fptr.close()
