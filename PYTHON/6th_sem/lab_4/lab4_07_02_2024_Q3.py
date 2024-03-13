def printNonPrimes(lr ,ur):
    flg = 0
    for i in range(lr, ur):
        for j in range(2, i):
            if(i % j == 0):
                flg = 1
                break
        if(flg == 1):
            print(i)
        flg = 0

lr = int(input("Enter lower limit: "))
ur = int(input("Enter upper limit: "))
printNonPrimes(lr, ur)
