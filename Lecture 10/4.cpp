#include <iostream>
using namespace std;

int globalVar = 5;  // Global variable

int main() {
    int globalVar = 15;  // Local variable
    cout << "Local Value: " << globalVar << endl;       // Prints local variable
    cout << "Global Value: " << ::globalVar << endl;   // Prints global variable
    return 0;
}