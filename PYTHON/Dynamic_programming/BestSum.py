#!/usr/bin/env python3
 
def bestsum(target,numbers):
    if(target==0):
        return []
    if(target<0):
        return None

    shortest_combi=[]

    
    for num in numbers:
        remainder=target-num
        res=bestsum(remainder,numbers)
        if(res!=None):
            res=res+[num]
            if(shortest_combi==[] or len(res)<len(shortest_combi)):
                shortest_combi=shortest_combi+res

    return shortest_combi

x=bestsum(8,[3,5])
print(x)
x=bestsum(100,[1,2,3,25])
print(x)
