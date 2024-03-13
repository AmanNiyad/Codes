class emp:
    num=0
    def __init__(self,name,des,sal):
        self.name = name
        self.des=des
        self.sal=sal
        emp.num+=1
    def disp(self):
        print("Name: {}  Designation: {}  Salary: {}".format(self.name,self.des,self.sal))
        print("Total employee : ",self.num)
e1 = emp("Aman", "Dean", 10000)
e2 = emp("Niyad", "Student", 0)
e1.disp()
e2.disp()
