#include <iostream>
using namespace std;

// Base class
class Operation {
    int num1, num2, num3;

public:
    // Compile-time polymorphism: Method Overloading
    void add(int a, int b) {
        num1 = a;
        num2 = b;
        cout << "Addition of two numbers: " << (num1 + num2) << endl;
    }

    void add(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
        cout << "Addition of three numbers: " << (num1 + num2 + num3) << endl;
    }

    // Virtual method for Run-time Polymorphism
    virtual void display() {
        cout << "Base class operation" << endl;
    }
};

// Derived class
class CustomOperation : public Operation {
public:
    void display() override {
        cout << "Derived class operation" << endl;
    }
};

int main() {
    Operation op;
    op.add(10, 20);  // Method overloading
    op.add(1, 2, 3); // Method overloading

    CustomOperation cop;
    cop.display(); // Method overriding
    return 0;
}
