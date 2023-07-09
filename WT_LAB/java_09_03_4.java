class Perim{
  Perim(double radius){
    System.out.println((3.14*radius*2));
  }
  Perim(double length,double breadth){
    System.out.println(2*(length+breadth));
  }
}

class java_09_03_4{
  public static void main(String[] args){
    Perim p1 =new Perim(10);
    Perim p2 =new Perim(10,20);
  }
}
