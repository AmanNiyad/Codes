yos = int(input("Enter years of service "))
salary = int(input("Enter salary "))

if( yos > 5 ):
    print("Net bonus amount = ", salary + (salary * 0.05))
else:
    print("No bonus for you")
