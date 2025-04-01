#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived obj;
    Base &baseRef = obj;  // Base class reference to derived object
    baseRef.display();    // Calls Derived class version due to polymorphism
    return 0;
}
