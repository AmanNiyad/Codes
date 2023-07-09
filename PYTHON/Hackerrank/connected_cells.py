#!/usr/bin/env python3

"""for i in range(4):
    for j in range(4):
        print(seen[(i,j)],end=" ")
    print("\n")

print(seen)
"""

matrix=[[1,1,1,0],[0,1,1,0],[0,0,1,0],[1,0,0,0]]
seen={}

for i in range(4):
    for j in range(4):
        seen[(i,j)]=False




def dfs(i,j,res):
    if(i==4 or j==4 or i<0 or j<0):
        return res
    if(seen[(i,j)]==True):
        return res

    if(matrix[i][j]==0):
        return res


    if(matrix[i][j]==1):
        seen[(i,j)]=True
        res+=1
        res=dfs(i,j+1,res)
        res=dfs(i,j-1,res)
        res=dfs(i-1,j,res)
        res=dfs(i+1,j,res)

    return(res)


def connected():
    res=0
    vals=[]
    for i in range(4):
        for j in range(4):
            if(matrix[i][j]==1):
                x=(dfs(i,j,res))
                vals.append(x)
    
    print(max(vals))

    

connected()