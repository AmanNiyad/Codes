def calculate_sum(li):
    res = 0
    for i in li:
        if (i < 0):
            return (res)
        else:
            res += i

    return(res)


li = eval(input("Enter list: "))
print("Sum: ", calculate_sum(li))
