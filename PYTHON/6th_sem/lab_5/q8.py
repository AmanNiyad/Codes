class Polygon:
    def area(self):
        pass

class triangle(Polygon):
    def __init__(self, base, height):
        print("Area of triangle: ", 0.5 * base * height)

class rect(Polygon):
    def __init__(self, len, bre):
        print("Area of rectangle: ", len * bre)

dim = eval(input("Enter len, bredth, base, height"))

t = triangle(dim[2], dim[3])
r = rect(dim[0], dim[1])
