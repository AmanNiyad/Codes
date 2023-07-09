import java.util.Scanner;

class TwoDimensional {
    protected double length;
    protected double breadth;

    public void setDimensions() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length and breadth of 2D shape: ");
        this.length = sc.nextDouble();
        this.breadth = sc.nextDouble();
    }

    public double calculateArea() {
        return this.length * this.breadth;
    }

    public double getCost() {
        return calculateArea() * 40;
    }
}

class ThreeDimensional extends TwoDimensional {
    protected double height;

    public void setDimensions() {
        super.setDimensions();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter height of 3D shape: ");
        this.height = sc.nextDouble();
    }

    public double calculateVolume() {
        return super.calculateArea() * this.height;
    }

    public double getCost() {
        return calculateVolume() * 60;
    }
}

public class java_23_03_1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ThreeDimensional shape = new ThreeDimensional();
        shape.setDimensions();

        System.out.print("Cost of plastic: Rs ");
        System.out.println(shape.getCost());
    }
}
