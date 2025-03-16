#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello World";
    string s2 = "C++ Programming";
    char arr[20];
    s1.copy(arr, 5, 0);
    arr[5] = '\0';
    cout << "Copied substring: " << arr << endl;
    s1.swap(s2);
    cout << "After swap, s1: " << s1 << endl;
    cout << "After swap, s2: " << s2 << endl;
    return 0;
}