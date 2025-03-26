#include <iostream>
using namespace std;

struct Demo {
    int value; // Public by default
};

int main() {
    Demo obj;
    obj.value = 100; // Works fine
    cout << "Value: " << obj.value << endl;
    return 0;
}
