#include <iostream>
using namespace std;

class MyClass {
private:
    ~MyClass() {}
};

int main() {
    MyClass* obj = new MyClass;  // Works fine
    return 0;
}
