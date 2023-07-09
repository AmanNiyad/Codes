
n=int(input())
arr = map(int, input().split())
arr=list(arr)
for i in range(n-1):
    for j in range(n-i-1):
        if arr[j]>=arr[j+1]:
            temp=arr[j+1]
            arr[j+1]=arr[j]
            arr[j]=temp
        else:
            pass

res=[]
[res.append(i) for i in arr if i not in res]

print(res[-2])
