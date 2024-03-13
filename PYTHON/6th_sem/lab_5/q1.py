class Students:
    def __init__(self,name,marks):
        self.name = name
        self.marks=marks
    def disp(self):
        print("Name: ",self.name)
        print("Marks: ",self.marks)

mr=[1,2,3]
nm = input("Enter the name: ")
s = Students(nm,mr)
s.disp()
