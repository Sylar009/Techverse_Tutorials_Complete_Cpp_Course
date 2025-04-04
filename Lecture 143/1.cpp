#include <iostream>
using namespace std;

// Base class
class GrandParent {
public:
    int gpValue;
    void setGrandParentData() {
        cout << "Enter Grandparent's value: ";
        cin >> gpValue;
    }
};

// Intermediate class
class Parent : public GrandParent {
public:
    int pValue;
    void setParentData() {
        cout << "Enter Parent's value: ";
        cin >> pValue;
    }
};

// Derived class
class Child : public Parent {
private:
    int cValue;
public:
    void setChildData() {
        cout << "Enter Child's value: ";
        cin >> cValue;
    }

    void displaySum() {
        int total = gpValue + pValue + cValue;
        cout << "Total Sum: " << total << endl;
    }
};

int main() {
    Child childObj;
    childObj.setGrandParentData();
    childObj.setParentData();
    childObj.setChildData();
    childObj.displaySum();
    return 0;
}
