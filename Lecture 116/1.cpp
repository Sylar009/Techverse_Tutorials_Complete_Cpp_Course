#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

int main() {
    cout << "Global Variable: " << globalVar << endl;
    globalVar = 200;
    cout << "Modified Global Variable: " << globalVar << endl;
    return 0;
}
