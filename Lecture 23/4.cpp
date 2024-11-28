#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    cout << "Original Value: " << flag << endl;
    cout << "After Logical NOT (!flag): " << !flag << endl;

    unsigned int x = 5; // Binary: 00000101
    cout << "Original Value (x): " << x << endl;
    cout << "Bitwise NOT (~x): " << ~x << endl;

    return 0;
}