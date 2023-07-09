#!/bin/python3

def grad(grades):
    #new=[]
    for i in range(len(grades)):
        if(grades[i]<38):
            continue
        else:
            temp=grades[i]
            while(temp%5!=0):
                temp+=1
            print("TEST",temp)
            if(temp-grades[i]<3):
                grades[i]=temp
            else:
                continue
            
    print(grades)


grad([73,67,38,33])