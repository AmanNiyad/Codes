class Student:
    def __init__(self, name, roll, marks):
        self.name = name
        self.roll = roll
        self.marks = marks
        self.disp()

    def disp(self):
        print("Name: {}\nRoll No: {}\nTotal Marks: {}".format(self.name, self.roll, sum(self.marks)))

name = input("Enter name")
roll = int(input("Enter roll"))
marks = eval(input("Enter marks"))

s = Student(name, roll, marks)
