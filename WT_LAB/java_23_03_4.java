class Shape {
    protected double area;
    public void showArea() {
        System.out.println("Area: " + this.area);
    }
}

class Circle extends Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
        this.area = calculateArea();
    }

    private double calculateArea() {
        return Math.PI * this.radius * this.radius;
    }
}
class Rectangle extends Shape {
    private double length;
    private double width;
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
        this.area = calculateArea();
    }

    private double calculateArea() {
        return this.length * this.width;
    }
}
public class java_23_03_4{
    public static void main(String[] args) {
        Circle c = new Circle(5.0);
        Rectangle r = new Rectangle(10.0, 7.0);
        System.out.println("Area of circle:");
        c.showArea();
        System.out.println("Area of rectangle:");
        r.showArea();
    }
}

