class Parent {
    public int compute(int value) {
        System.out.print("Parent compute(int): ");
        return value + 3;
    }
}

class Child extends Parent {
    public double compute(double value) {
        System.out.print("Child compute(double): ");
        return value + 3.3;
    }
}

public class App {
    public static void main(String[] args) {
        Child obj = new Child();
        System.out.println(obj.compute(5));
        System.out.println(obj.compute(5.5));
    }
}
