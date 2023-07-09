class employee {
    private int empid;
    private String name;
    private int salary;

    public void inp(int empid,String name, int salary) {
        this.empid = empid ;
        this.name = name;
        this.salary= salary;
    }

    public void disp() {
        System.out.println("Empid: " + empid);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}


public class java_23_02_2 {
    public static void main(String[] args) {
        employee one = new employee();
        one.inp(101,"John",50000);
        one.disp();

        employee two = new employee();
        two.inp(102, "Smith", 50000);
        two.disp();

        employee three = new employee();
        three.inp(103, "Niyad",1000000);
        three.disp();
    }
}
