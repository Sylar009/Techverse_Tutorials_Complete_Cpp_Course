#include <iostream>
using namespace std;

int main() {
    int num = 10;
    char ch = 'A';
    double val = 20.5;
    cout << "Size of num: " << sizeof(num) << " bytes\n";
    cout << "Size of ch: " << sizeof(ch) << " bytes\n";
    cout << "Size of val: " << sizeof(val) << " bytes\n";
    return 0;
}