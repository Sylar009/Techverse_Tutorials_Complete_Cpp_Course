#include <iostream>
using namespace std;

int main() {
    int num = 15; // Regular variable
    int* ptr; // Pointer variable

    ptr = &num; // Storing address of 'num'

    cout << "Value of num: " << num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value using *ptr: " << *ptr << endl;

    return 0;
}