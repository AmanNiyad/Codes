import math
def primeFactors(num):
    li = []
    while (num % 2 == 0):
        li.append(2)
        num /= 2
    
    for i in range(3, int(math.sqrt(num))+1, 2):
        while(num % i == 0):
            li.append(i)
            num /= i

    if (num > 2):
        li.append(int(num))

    return(li)


num = int(input("Enter Number: "))
print(primeFactors(num))
