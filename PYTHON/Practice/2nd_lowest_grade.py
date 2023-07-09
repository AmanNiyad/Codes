arr=[]
arr1=[]
for i in range(int(input())):
    name = input()
    score = float(input())
    arr.append(name)
    arr.append(score)
    arr1.append(arr)

n=len(arr1)
for i in range(n-1):
    for j in range(n-i-1):
        if(arr1[j][1]>=arr[j+1][1]):
            temp=arr[j+1]
            arr[j+1]=arr[j]
            arr[j]=temp
        else:
            pass
print(arr1[-2])