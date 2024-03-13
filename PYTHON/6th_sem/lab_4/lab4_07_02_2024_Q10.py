import math
def cubeSum(num):
    sum1 = 0  
    while(num != 0):
        sum1 += math.pow((num % 10),3)
        num //= 10
    return(sum1)

num = int(input("Enter the number: "))
print(cubeSum(num))
