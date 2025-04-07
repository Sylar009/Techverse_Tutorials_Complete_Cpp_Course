#include <iostream>
using namespace std;

class Parent {
public:
    int calculate(int value) {
        cout << "Parent calculate(int): ";
        return value + 2;
    }
};

class Child : public Parent {
public:
    double calculate(double value) {
        cout << "Child calculate(double): ";
        return value + 2.5;
    }
};

int main() {
    Child obj;
    cout << obj.calculate(5) << endl;
    cout << obj.calculate(5.5) << endl;
    return 0;
}
