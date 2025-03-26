#include <iostream>
using namespace std;

class Demo {
    int value; // Private by default
};

int main() {
    Demo obj;
    // obj.value = 100; // Error: Cannot access private member
    return 0;
}
