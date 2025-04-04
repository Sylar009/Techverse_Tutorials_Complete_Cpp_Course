#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base class constructor\n"; }
};

class Derived1 : virtual public Base {
public:
    Derived1() { cout << "Derived1 class constructor\n"; }
};

class Derived2 : virtual public Base {
public:
    Derived2() { cout << "Derived2 class constructor\n"; }
};

class Final : public Derived1, public Derived2 {
public:
    Final() { cout << "Final class constructor\n"; }
};

int main() {
    Final obj;
    return 0;
}
