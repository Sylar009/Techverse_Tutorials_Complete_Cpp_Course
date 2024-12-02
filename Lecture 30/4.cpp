#include<iostream>
using namespace std;

class Parent1 {
protected:
    int value1;
public:
    Parent1() { value1 = 10; }
};

class Parent2 {
protected:
    int value2;
public:
    Parent2() { value2 = 20; }
};

class Child : public Parent1, public Parent2 {
public:
    void display() {
        cout << "Parent1 value: " << Parent1::value1 << endl;
        cout << "Parent2 value: " << Parent2::value2 << endl;
    }
};

int main() {
    Child obj;
    obj.display();
    return 0;
}