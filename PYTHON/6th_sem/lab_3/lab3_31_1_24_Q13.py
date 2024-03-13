lr = int(input("Enter lower limit: "))
ur = int(input("Enter upper limit: "))

flg = 0
for i in range(lr, ur):
    for j in range(2, i):
        if(i % j == 0):
            flg = 1
            break
    if(flg == 0):
        print(i)
    flg = 0

