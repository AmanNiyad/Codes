qty = int(input("Enter quantity "))
price = 100

cost = qty * price

if (cost > 1000):
    print("Discounted cost = ",cost - (cost*0.1))
