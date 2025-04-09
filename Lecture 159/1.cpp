#include <iostream>
using namespace std;

class Parent {
public:
    Parent() { cout << "Parent constructor\n"; }
    virtual ~Parent() { cout << "Parent destructor\n"; }

    void display() { cout << "Display called from Parent\n"; }
    virtual void print() { cout << "Print from Parent\n"; }
};

class Child : public Parent {
public:
    Child() { cout << "Child constructor\n"; }
    virtual ~Child() { cout << "Child destructor\n"; }

private:
    virtual void print() override { cout << "Print from Child\n"; }
};

int main() {
    Parent* ptr = new Child();
    ptr->display();
    ptr->print();
    delete ptr;
    return 0;
}
