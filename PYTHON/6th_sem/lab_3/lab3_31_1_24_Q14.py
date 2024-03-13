li1 = eval(input("Enter list1: "))
li2 = eval(input("Enter list2: "))

print("Common Elements: \n")

for i in li1:
    for j in li2:
        if(i == j):
            print(i, end = " ")
