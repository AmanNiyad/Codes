def commonList(li1 ,li2):
    print("Common list: \n")
    for i in li1:
        for j in li2:
            if(i == j):
                print(i, end = " ")

li1 = eval(input("Enter list1: "))
li2 = eval(input("Enter list2: "))
commonList(li1, li2)
 
