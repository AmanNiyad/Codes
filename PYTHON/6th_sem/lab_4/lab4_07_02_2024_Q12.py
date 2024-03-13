def printmul(num):
    if(num == 1):
        pass
    else:
        printmul(num-1)
    

    print("12 X ",num,"= ",num*12)

num = int(input("Enter number upto multiplication table needed: "))
printmul(num)
