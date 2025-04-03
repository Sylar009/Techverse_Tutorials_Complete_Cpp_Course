#include <iostream>
using namespace std;

class Demo {
public:
    int number;
    Demo(int num) : number(num) {}
    Demo* operator->() { return this; } // Overload ->
};

int main() {
    Demo obj(42);
    cout << "Value: " << obj->number << endl;
    return 0;
}
