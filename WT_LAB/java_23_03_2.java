class Account {
    protected int acc_no;
    protected double balance;

    public Account(int acc_no, double balance) {
        this.acc_no = acc_no;
        this.balance = balance;
    }

    public void disp() {
        System.out.println("Account number: " + this.acc_no);
        System.out.println("Balance: Rs " + this.balance);
    }
}

class Person extends Account {
    protected String name;
    protected long aadhar_no;

    public Person(int acc_no, double balance, String name, long aadhar_no) {
        super(acc_no, balance);
        this.name = name;
        this.aadhar_no = aadhar_no;
    }

    public void disp() {
        super.disp();
        System.out.println("Name: " + this.name);
        System.out.println("Aadhar number: " + this.aadhar_no);
    }
}

public class java_23_03_2{
    public static void main(String[] args) {
        Person p1 = new Person(123456, 5000, "John", 123456789012L);
        Person p2 = new Person(789012, 8000, "Jane", 345678901234L);

        System.out.println("Details of person 1:");
        p1.disp();
        System.out.println();

        System.out.println("Details of person 2:");
        p2.disp();
    }
}
