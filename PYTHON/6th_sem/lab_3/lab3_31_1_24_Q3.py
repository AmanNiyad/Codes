li = eval(input("Enter list: "))

even_ctr = 0
odd_ctr = 0

for i in li:
    if (i % 2 == 0):
        even_ctr += 1
    else:
        odd_ctr += 1

print("Even: ",even_ctr)
print("Odd: ",odd_ctr)
