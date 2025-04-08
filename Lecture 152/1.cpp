#include <iostream>
using namespace std;

// Base class without virtual destructor
class Parent {
public:
    Parent() { cout << "Parent Constructor\n"; }
    ~Parent() { cout << "Parent Destructor\n"; }
};

// Derived class
class Child : public Parent {
public:
    Child() { cout << "Child Constructor\n"; }
    ~Child() { cout << "Child Destructor\n"; }
};

int main() {
    Child* obj = new Child();
    Parent* basePtr = obj;
    delete basePtr; // Undefined behavior
    return 0;
}
