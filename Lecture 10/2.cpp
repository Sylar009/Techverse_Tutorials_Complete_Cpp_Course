#include <iostream>
using namespace std;

int globalValue = 100;  // Global variable

void printGlobal() {
    cout << "Global Value: " << globalValue << endl;
}

int main() {
    printGlobal();
    globalValue = 200;  // Modify global variable
    printGlobal();
    return 0;
}