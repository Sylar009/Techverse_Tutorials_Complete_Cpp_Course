#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseId;
    void displayBase() {
        cout << "Base ID: " << baseId << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedId;
    void displayDerived() {
        cout << "Derived ID: " << derivedId << endl;
    }
};

int main() {
    Derived obj;
    obj.baseId = 100;
    obj.displayBase();
    obj.derivedId = 200;
    obj.displayDerived();
    return 0;
}
