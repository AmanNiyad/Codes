def poweer(a, b):
    if(b==0):
        return(1)
    else:
        return(a*poweer(a, b-1))

a = int(input("Enter number: "))
b = int(input("Enter power: "))

print(poweer(a, b))
