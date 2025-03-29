#include <iostream>
using namespace std;

// Overloaded function with float parameters
void checkValues(float a, float b) {
    cout << "Function with float parameters called.\n";
}

// Overloaded function with int parameters
void checkValues(int x, int y) {
    cout << "Function with int parameters called.\n";
}

int main() {
    checkValues(3.5, 5.6); // Compiler error
    return 0;
}
