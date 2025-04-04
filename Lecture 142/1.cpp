#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() {
        cout << "This is the Parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void showChild1() {
        cout << "This is Child1 class." << endl;
    }
};

class Child2 : public Parent {
public:
    void showChild2() {
        cout << "This is Child2 class." << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    cout << "Calling functions from Child1:" << endl;
    obj1.showChild1();
    obj1.showParent();

    cout << "Calling functions from Child2:" << endl;
    obj2.showChild2();
    obj2.showParent();

    return 0;
}
