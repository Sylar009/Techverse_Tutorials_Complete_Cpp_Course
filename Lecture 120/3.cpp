#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent Class Function" << endl;
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child Class Function" << endl;
    }
};

int main() {
    Parent* obj = new Child();
    obj->show(); // Calls Child's show function
    delete obj;
    return 0;
}
