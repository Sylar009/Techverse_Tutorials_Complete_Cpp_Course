#include <iostream>
using namespace std;

int main() {
    int num1 = 12; // Binary: 1100
    int num2 = 5;  // Binary: 0101

    // Bitwise AND
    int andResult = num1 & num2;

    // Bitwise OR
    int orResult = num1 | num2;

    // Bitwise XOR
    int xorResult = num1 ^ num2;

    // Bitwise NOT
    int notResult = ~num1;

    // Left Shift
    int leftShift = num1 << 1;

    // Right Shift
    int rightShift = num1 >> 1;

    cout << "AND: " << andResult << endl;
    cout << "OR: " << orResult << endl;
    cout << "XOR: " << xorResult << endl;
    cout << "NOT: " << notResult << endl;
    cout << "Left Shift: " << leftShift << endl;
    cout << "Right Shift: " << rightShift << endl;

    return 0;
}
