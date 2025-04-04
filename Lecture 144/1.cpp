#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 Constructor called\n";
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 Constructor called\n";
    }
};

class Derived : public Base1, virtual Base2 {
public:
    Derived() : Base1(), Base2() {
        cout << "Derived Constructor called\n";
    }
};

int main() {
    Derived obj;
    return 0;
}
