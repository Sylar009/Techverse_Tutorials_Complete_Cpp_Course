#include <iostream>
using namespace std;

void example() {
    int num = 25;
    int* ptr = &num;

    cout << "Address of num: " << ptr << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value at address pointed by ptr: " << *ptr << endl;
}

int main() {
    example();
    return 0;
}