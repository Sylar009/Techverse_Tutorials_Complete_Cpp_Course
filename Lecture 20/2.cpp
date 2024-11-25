#include <iostream>
using namespace std;

class Base {
public:
    virtual void sound() { cout << "Base sound" << endl; }
};

class DerivedA : public Base {
public:
    void sound() override { cout << "DerivedA sound" << endl; }
};

class DerivedB : public Base {
public:
    void sound() override { cout << "DerivedB sound" << endl; }
};

int main() {
    Base* basePtr = new DerivedA();

    // Attempting downcast
    DerivedA* derivedAPtr = dynamic_cast<DerivedA*>(basePtr);
    if (derivedAPtr) derivedAPtr->sound();

    // Attempting invalid downcast
    DerivedB* derivedBPtr = dynamic_cast<DerivedB*>(basePtr);
    if (!derivedBPtr) cout << "Invalid cast to DerivedB" << endl;

    delete basePtr;
    return 0;
}