class Base {
    int a;
    public Base(int a) {
        this.a = a;
    }
}

class Derived extends Base {
    int b;
    public Derived(int a, int b) {
        super(a);
        this.b = b;
    }
    public void display() {
        System.out.println("a = " + this.a + ", b = " + this.b);
    }
}
public class java_23_03_3{
    public static void main(String[] args) {
        Derived d = new Derived(10, 20);
        d.display();
    }
}
