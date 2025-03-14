#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[4];

    cout << "Element Count Between Pointers: " << (ptr2 - ptr1) << endl;

    return 0;
}