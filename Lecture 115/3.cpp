#include <iostream>
using namespace std;

class Parent {
public:
    int a;
};

class Child : public Parent {
public:
    int b;
};

int main() {
    Child obj;
    obj.a = 10;
    obj.b = 20;
    cout << obj.a << ", " << obj.b << endl;
    return 0;
}
