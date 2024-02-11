import re

st = '''This is a string that I am using for learning regex,
regex can be very complicated to learn,
but i hope in the end, it'll be worth it'''

pattern = re.compile(r'Learn',flags = re.I)
result = pattern.finditer(st)

for i in result:
    print(i)

result = pattern.findall(st)

for i in result:
    print(i)

result =  re.match(r'Learn', st, flags = re.I)
print(result)

 
