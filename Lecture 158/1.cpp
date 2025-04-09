#include <iostream>
using namespace std;

class Base {};  // Base class without virtual function
class Derived : public Base {};  // Derived class

int main() {
    Base* basePtr = new Derived;  // Base pointer
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Attempted cast
    if (derivedPtr != nullptr)
        cout << "Cast successful.\n";
    else
        cout << "Cannot cast Base* to Derived*.\n";
    return 0;
}
