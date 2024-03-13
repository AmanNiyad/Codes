month = int(input("Enter month number "))

month_name = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
number_of_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for i in range(12):
    if (i == month-1):
        print ("Month is ", month_name[i]," and number of days is ", number_of_days[i])
