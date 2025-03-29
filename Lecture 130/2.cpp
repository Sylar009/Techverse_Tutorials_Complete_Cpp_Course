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
    checkValues(3.5f, 5.6f); // Using suffix 'f' to specify float
    return 0;
}
