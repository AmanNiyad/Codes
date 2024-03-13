num = int(input("Enter num: "))

for i in range(num):
    for j in range(num):
        if(i > j):
            print(i, end = "")
    print()
