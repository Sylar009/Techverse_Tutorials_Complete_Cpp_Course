#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 3; // Example variables
    cout << "Bitwise AND (x & y): " << (x & y) << endl;
    cout << "Bitwise OR (x | y): " << (x | y) << endl;
    cout << "Bitwise XOR (x ^ y): " << (x ^ y) << endl;
    cout << "Left Shift (x << 1): " << (x << 1) << endl;
    cout << "Right Shift (x >> 1): " << (x >> 1) << endl;
    cout << "One's Complement (~x): " << (~x) << endl;
    return 0;
}