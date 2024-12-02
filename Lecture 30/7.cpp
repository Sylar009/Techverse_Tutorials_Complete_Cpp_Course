#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is the Parent class method." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is the Child class method." << endl;
    }
};

int main() {
    Child obj;
    obj.Parent::show(); // Call Parent class method
    obj.show(); // Call Child class method
    return 0;
}