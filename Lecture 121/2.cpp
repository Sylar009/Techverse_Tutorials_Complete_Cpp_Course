#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent Class Function\n";
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child Class Function\n";
    }
};

int main() {
    Parent* ptr;
    Child obj;
    ptr = &obj;
    ptr->show();
    return 0;
}