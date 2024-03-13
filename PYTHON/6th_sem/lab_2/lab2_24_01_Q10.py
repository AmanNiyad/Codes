cp = int(input("Enter cost price "))

if (cp > 100000):
    print ("Road tax = ",cp*(15/100))
elif (cp > 50000 and cp <= 100000):
    print ("Road tax = ",cp*(10/100))
else:
    print ("Road tax = ",cp*(5/100))
