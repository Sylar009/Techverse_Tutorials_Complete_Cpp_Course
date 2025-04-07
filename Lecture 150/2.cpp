#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    virtual void show(int value = 5) {
        cout << "Parent::show(), value = " << value << endl;
    }
};

// Derived class
class Child : public Parent {
public:
    void show(int value = 10) {
        cout << "Child::show(), value = " << value << endl;
    }
};

int main() {
    Child obj; // Object of Child class
    Parent* ptr = &obj; // Base class pointer

    ptr->show(); // Calling function via base class pointer

    return 0;
}
