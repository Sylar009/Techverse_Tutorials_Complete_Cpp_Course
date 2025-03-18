#include <iostream>
using namespace std;

class Parent {
protected:
    int value;

public:
    void set_value(int val) {
        value = val;
    }
};

class Child : public Parent {
public:
    void display_value() {
        cout << "Value is: " << value << "\n";
    }
};

int main() {
    Child obj;
    obj.set_value(50);
    obj.display_value();
    return 0;
}
