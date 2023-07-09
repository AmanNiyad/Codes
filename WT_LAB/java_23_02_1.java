public class Animal {
    private String name;
    private String type;

    public void in(String name, String type) {
        this.name = name;
        this.type = type;
    }

    public void out() {
        System.out.println("Name: " + name);
        System.out.println("Type: " + type);
    }
}


public class java_23_02_1 {
    public static void main(String[] args) {
        Animal lion = new Animal();
        lion.in("lion", "carnivore");
        lion.out();

        Animal dog = new Animal();
        dog.in("dog", "omnivore");
        dog.out();

        Animal cow = new Animal();
        cow.in("cow", "herbivore");
        cow.out();
    }
}
