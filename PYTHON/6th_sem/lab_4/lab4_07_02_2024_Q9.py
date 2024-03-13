def decToBin(num):
    if (num >= 1):
        decToBin(num // 2)
    print(num % 2, end ="")

num = int(input("Enter Number: "))
decToBin(num)
