#! /usr/bin/env python3

arr=[[1,3,1],[2,1,2],[3,3,3]]

#arr=[[1,4,7],[2,5,8],[3,6,9]]

def display():
    for i in range(3):
        for j in range(3):
            print(arr[i][j],end=" ")
        print("\n")

containers={}
balls={}

def organise():
    sum=0
    sum1=0

    for i in range(3):
        sum=0
        sum1=0
        for j in range(3):
            if(i!=j):
                sum+=arr[i][j]
            containers[i]=sum
            if(i!=j):
                sum1+=arr[j][i]
            balls[i]=sum1
                
    print(containers)
    print(balls)

    
    if(containers==balls):
        print("Possible")
    else:
        print("Impossible")

organise()