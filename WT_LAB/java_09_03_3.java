class Area_calc{
  static double area(double radius){
    return (3.14*radius*radius);
  }
  static double area(double length,double breadth){
    return (length*breadth);
  }
}

class java_09_03_3{
  public static void main(String[] args){
    System.out.println(Area_calc.area(10));
    System.out.println(Area_calc.area(10,20));
  }
}
