#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0; // Pure virtual destructor
};

Base::~Base() {
    cout << "Base class destructor called.\n";
}

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called.\n";
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;
    return 0;
}
