public class Objectcounter {
    private static int count = 0;
    private int id;

    public Objectcounter() {
        count++;
        id = count;
        System.out.println("This is " + id + "-th object created");
    }

    public static void main(String[] args) {
        Objectcounter obj1 = new Objectcounter();
        Objectcounter obj2 = new Objectcounter();
        Objectcounter obj3 = new Objectcounter();
    }
}
