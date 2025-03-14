#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int& ref = num; // Reference to 'num'

    ref = 30; // Changing value through reference

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}