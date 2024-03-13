li = eval(input("Enter list of numbers: "))

res = 0

for i in li:
    if(i<0):
        break
    res += i

print("Sum is: ", res)
