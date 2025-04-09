#include <iostream>
using namespace std;

class Base {
    virtual void display() {}  // Virtual function to enable RTTI
};
class Derived : public Base {};

int main() {
    Base* basePtr = new Derived;  // Base pointer
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Safe cast
    if (derivedPtr != nullptr)
        cout << "Cast successful.\n";
    else
        cout << "Cannot cast Base* to Derived*.\n";
    return 0;
}
