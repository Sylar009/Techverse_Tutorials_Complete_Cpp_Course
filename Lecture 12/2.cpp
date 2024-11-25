#include <iostream>
using namespace std;

class Example {
public:
    static int count; // Static member declaration
};

int Example::count = 10; // Initialization

int main() {
    Example obj1, obj2;
    cout << "Static variable count: " << Example::count << endl;
    return 0;
}