#include <iostream>
using namespace std;

class AbstractBase {
protected:
    int data;
public:
    AbstractBase(int val) : data(val) {
        cout << "AbstractBase constructor called\n";
    }
    virtual void display() = 0; // Pure virtual function
};

class DerivedClass : public AbstractBase {
public:
    DerivedClass(int val) : AbstractBase(val) {}
    void display() override {
        cout << "Value: " << data << '\n';
    }
};

int main() {
    DerivedClass obj(42);
    obj.display();
    return 0;
}