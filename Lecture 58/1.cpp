#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int* ptr = &value;

    cout << "Original Address: " << ptr << endl;
    ptr++;
    cout << "After Increment: " << ptr << endl;
    ptr--;
    cout << "After Decrement: " << ptr << endl;

    return 0;
}