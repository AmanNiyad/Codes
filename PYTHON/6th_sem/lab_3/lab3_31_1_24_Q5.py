rows = int(input("Enter no. of rows:"))
cols = int(input("Enter no. of columns:"))

li = []

for i in range(cols):
    row = [i*j for j in range(rows)]
    li.append(row)

for i in range(cols):
    for j in range(rows):
        print(li[i][j], end= " ")
    print()
