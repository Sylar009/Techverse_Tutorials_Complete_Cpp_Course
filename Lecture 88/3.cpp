#include <iostream>
using namespace std;

typedef int* IntPointer;

int main() {
    int a = 100, b = 200;
    IntPointer ptr1 = &a, ptr2 = &b;

    cout << "Value of a: " << *ptr1 << endl;
    cout << "Value of b: " << *ptr2 << endl;

    return 0;
}