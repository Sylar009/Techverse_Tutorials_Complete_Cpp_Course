#include <iostream>
using namespace std;

class Parent {
public:
    void printMessage() {
        cout << "Base Class Function\n";
    }
};

class Child : public Parent {
public:
    void printMessage() {
        cout << "Derived Class Function\n";
    }
};

int main() {
    Child obj;
    obj.printMessage();
    return 0;
}