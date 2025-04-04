#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        int num1 = 10, num2 = 15;
        cout << "Sum is: " << (num1 + num2) << endl;
    }
};

class Base2 {
public:
    Base2() {
        int num1 = 25, num2 = 5;
        cout << "Difference is: " << (num1 - num2) << endl;
    }
};

class Derived : public Base1, virtual Base2 {
public:
    Derived() : Base1(), Base2() {
        int num1 = 8, num2 = 4;
        cout << "Product is: " << (num1 * num2) << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}
