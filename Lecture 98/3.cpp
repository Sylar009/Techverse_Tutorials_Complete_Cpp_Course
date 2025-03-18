#include <iostream>
using namespace std;

class A; // Forward declaration

class B {
public:
    void show(const A& a); // Declare the function inside B
};

class A {
private:
    int value;

public:
    A() : value(20) {}
    friend void B::show(const A& a); // Friend function declaration
};

// Define the member function of B after A is fully defined
void B::show(const A& a) {
    cout << "Value from A: " << a.value << endl;
}

int main() {
    A objA;
    B objB;
    objB.show(objA);
    return 0;
}
