#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    virtual void identify() { cout << "I am Parent\n"; }
};

// Derived class
class Child : public Parent {
public:
    void identify() override { cout << "I am Child\n"; }
};

int main() {
    // Part 1: Object call
    Parent baseObj;
    baseObj.identify();

    // Part 2: Pointer call
    Parent* ptr = new Child();
    ptr->identify();

    delete ptr; // Free allocated memory
    return 0;
}
