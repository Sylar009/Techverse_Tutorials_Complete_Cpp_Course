#include <iostream>
using namespace std;

class Parent1 {
public:
    Parent1() { cout << "Parent1's constructor called\n"; }
};

class Parent2 {
public:
    Parent2() { cout << "Parent2's constructor called\n"; }
};

class Child : public Parent1, public Parent2 {
public:
    Child() { cout << "Child's constructor called\n"; }
};

int main() {
    Child obj;
    return 0;
}
