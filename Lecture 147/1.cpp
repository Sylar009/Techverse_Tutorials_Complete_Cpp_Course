#include <iostream>
using namespace std;

class Parent {
    int x, y;
public:
    void sum(int a, int b) {
        x = a;
        y = b;
        cout << "Sum of x + y is: " << (x + y) << endl;
    }
};

class Child : public Parent {
public:
    void display(int a, int b) {
        sum(a, b);
    }
};

int main() {
    Child obj;
    obj.display(5, 6);
    return 0;
}
