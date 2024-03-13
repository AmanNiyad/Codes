
li = eval(input("Enter list of numbers: "))

res = 0

for i in li:
    if(i<0):
        pass
    else:
        res += i

print("Sum is: ", res)
