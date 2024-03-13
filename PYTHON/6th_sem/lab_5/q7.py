class Fraction:
    def __init__(self, numerator, denominator):
        self.n = numerator
        self.d = denominator
        self.area()

    def area(self):
        print("Simplified = ", self.n / self.d)

numerator = int(input("Enter numerator "))
denominator = int(input("Enter denominator "))

r = Fraction(numerator,denominator)
