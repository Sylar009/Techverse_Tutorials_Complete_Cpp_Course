#include <iostream>
using namespace std;

int globalNum = 50;  // Global variable

int main() {
    int globalNum = 10;  // Local variable
    cout << "Local Value: " << globalNum << endl;  // Prints local variable
    return 0;
}