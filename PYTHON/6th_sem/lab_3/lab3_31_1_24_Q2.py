st = input("Enter string ")

st1 = ""
for i in st:
    if (i.isupper()):
        st1 = st1 + i.lower()
    else:
        st1 = st1 + i.upper()

print(st1)
