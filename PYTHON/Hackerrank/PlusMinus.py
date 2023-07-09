def plusMinus(arr):
    len=len(arr)
    zer=0
    pos=0
    neg=0
    for i in arr:
        if(i==0):
            zer+=1
        if(i>0):
            pos+=1
        else:
            neg+=1
    
    print("{0:.6f}".format(pos/len))
    print("{0:.6f}".format(neg/len))
    print("{0:.6f}".format(zer/len))
    
            
            
plusMinus([1,1,0,-1,-1])