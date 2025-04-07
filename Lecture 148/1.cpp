#include <iostream>
using namespace std;

class Parent {
public:
    virtual void display() { cout << "Parent display function.\n"; }
    void show() { cout << "Parent show function.\n"; }
};

class Child : public Parent {
public:
    void display() { cout << "Child display function.\n"; }
    void show() { cout << "Child show function.\n"; }
};

int main() {
    Parent* ptr;
    Child obj;
    ptr = &obj;

    // Late binding: Virtual function
    ptr->display();

    // Early binding: Non-virtual function
    ptr->show();

    return 0;
}
