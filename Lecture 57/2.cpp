#include <iostream>
using namespace std;

void squareByPointer(int* ptr) {
    *ptr = (*ptr) * (*ptr);
}

void squareByReference(int& ref) {
    ref = ref * ref;
}

int main() {
    int num = 4;

    cout << "Original number: " << num << endl;
    squareByPointer(&num);
    cout << "After squareByPointer: " << num << endl;

    num = 4;  // Reset value
    squareByReference(num);
    cout << "After squareByReference: " << num << endl;

    return 0;
}