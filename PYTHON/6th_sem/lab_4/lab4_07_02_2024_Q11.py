def sumPDivisors(num):
    sum1 = 0
    for i in range(1, num):
        if (num % i == 0):
            sum1 += i
    return(sum1)

num = int(input("Enter Number: "))
print(sumPDivisors(num))
