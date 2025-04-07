#include <iostream>
using namespace std;

class Operation {
    int x, y, z;
public:
    void calculate(int a, int b) {
        x = a;
        y = b;
        cout << "Sum of x + y is: " << (x + y) << endl;
    }
    void calculate(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
        cout << "Sum of x + y + z is: " << (x + y + z) << endl;
    }
    virtual void show() {
        cout << "Operation in base class" << endl;
    }
};

class AdvancedOperation : public Operation {
public:
    void show() override {
        cout << "Operation in derived class" << endl;
    }
};

int main() {
    Operation obj1;
    obj1.calculate(4, 5);  // Overloading
    obj1.calculate(1, 2, 3);

    AdvancedOperation obj2;
    obj2.show();  // Overriding
    return 0;
}
