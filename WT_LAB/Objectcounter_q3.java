public class Objectcounter_q3 {
    private int id;

    public Objectcounter_q3(int count) {
        id = count;
        System.out.println("This is " + id + "-th object created");
    }

    public static void main(String[] args) {
        Objectcounter_q3 obj1 = new Objectcounter_q3(1);
        Objectcounter_q3 obj2 = new Objectcounter_q3(2);
        Objectcounter_q3 obj3 = new Objectcounter_q3(3);
    }
}
