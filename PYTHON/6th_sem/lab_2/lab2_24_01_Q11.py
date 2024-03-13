num = int(input("Enter number "))
ctr = 0
while (num != 0):
    num //= 10
    ctr += 1

if (ctr == 3):
    print("Three digit number")
else:
    print("Not a three digit number")
