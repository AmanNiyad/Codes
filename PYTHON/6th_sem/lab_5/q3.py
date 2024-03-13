class Person:
    def __init__(self,name,dob,today):
        self.name = name
        self.dob=dob
        self.today=today
    def cal(self):
        age = self.today - self.dob
        if age>=18:
            print("Eligible")
        else:
            print("Not Eligible")

p = Person("Aman",2003,2024)
p.cal()
