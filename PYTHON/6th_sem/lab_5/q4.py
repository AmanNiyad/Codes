class Circle:
    pi = 3.14
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        print("Area = ", self.pi * self.radius * self.radius)
    def circum(self):
        print("Circumferrence = ",2 * self.pi * self.radius)


r = int(input("Enter radius"))
c = Circle(r)

c.area()
c.circum()
