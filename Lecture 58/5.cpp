#include <iostream>
using namespace std;

int main() {
    int val1 = 10;
    int val2 = 20;
    int* ptr1 = &val1;
    int* ptr2 = &val1;

    if (ptr1 == ptr2) {
        cout << "Pointers point to the same address." << endl;
    } else {
        cout << "Pointers point to different addresses." << endl;
    }

    return 0;
}