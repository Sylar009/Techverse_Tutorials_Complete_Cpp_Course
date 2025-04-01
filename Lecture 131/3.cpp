#include <iostream>
using namespace std;

class MyClass {
    int value;

public:
    MyClass(int val) : value(val) {}

    void showValue() const {
        cout << "Const function: Value is " << value << endl;
    }

    void showValue() {
        cout << "Non-const function: Value is " << value << endl;
    }
};

int main() {
    MyClass obj1(10);
    const MyClass obj2(20);

    obj1.showValue();  // Calls non-const function
    obj2.showValue();  // Calls const function

    return 0;
}
