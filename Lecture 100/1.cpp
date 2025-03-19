#include <iostream>
using namespace std;

class Parent {
public:
    Parent() { cout << "Parent Constructor Invoked" << endl; }
};

class Child : public Parent {
public:
    Child() { cout << "Child Constructor Invoked" << endl; }
};

class Container {
    Parent obj;
public:
    Container() { cout << "Container Constructor Invoked" << endl; }
};

int main() {
    Parent p;
    Child c;
    Container cn;
    return 0;
}
