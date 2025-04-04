#include <iostream>
using namespace std;

// Base class
class Parent {
protected:
    int data;

public:
    Parent() { data = 10; }
    friend void display();
};

// Derived class
class Child : public Parent {
private:
    int childData;

public:
    Child() { childData = 20; }
};

// Friend function
void display() {
    Child obj;
    cout << "Parent data: " << obj.data << endl;

    // Error: Cannot access private member of Child
    // cout << "Child data: " << obj.childData << endl;
}

int main() {
    display();
    return 0;
}
