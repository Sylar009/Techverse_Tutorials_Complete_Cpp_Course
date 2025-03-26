#include <iostream>
using namespace std;

struct Parent {
    int a;
};

struct Child : Parent {
    int b;
};

int main() {
    Child obj;
    obj.a = 10;
    obj.b = 20;
    cout << obj.a << ", " << obj.b << endl;
    return 0;
}
