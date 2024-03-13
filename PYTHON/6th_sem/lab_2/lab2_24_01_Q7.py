year = int(input("Enter Year "))

if(year % 100 == 0):
    if(year % 4 == 0):
        if (year % 400 == 0):
            print("Leap year")
        else:
            print("Not a leap year")
else:
    if(year % 4 == 0):
        print("Leap year")
    else:
        print("Not a leap year")
