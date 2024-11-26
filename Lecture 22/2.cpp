#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 10;

    cout << "Initial value of a: " << a << endl;
    cout << "Post-increment (a++): " << a++ << endl;
    cout << "After post-increment, a: " << a << endl;
    cout << "Pre-increment (++a): " << ++a << endl;

    cout << "Initial value of b: " << b << endl;
    cout << "Post-decrement (b--): " << b-- << endl;
    cout << "After post-decrement, b: " << b << endl;
    cout << "Pre-decrement (--b): " << --b << endl;

    return 0;
}