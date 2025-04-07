using System;

class Parent {
    public double process(double value) {
        Console.Write("Parent process(double): ");
        return value + 2.5;
    }
}

class Child : Parent {
    public int process(int value) {
        Console.Write("Child process(int): ");
        return value + 3;
    }
}

class Program {
    static void Main() {
        Child obj = new Child();
        Console.WriteLine(obj.process(5));
        Console.WriteLine(obj.process(5.5));
    }
}
