st = input("Enter string: ")

ctr1 = 0
ctr2 = 0

for i in st:
    if(i.isalpha()):
        ctr1 += 1
    elif(i.isdigit()):
        ctr2 += 1

print("Alphabets: ", ctr1)
print("Digits: ", ctr2)

