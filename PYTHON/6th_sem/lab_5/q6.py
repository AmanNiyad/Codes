class Rect:
    def __init__(self, len, bre):
        self.len = len
        self.bre = bre
        self.area()

    def area(self):
        print("Area = ", self.len * self.bre)

len = int(input("Enter len"))
bre = int(input("Enter bre"))

r = Rect(len, bre)
