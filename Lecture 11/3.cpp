#include <iostream>
using namespace std;

int globalVar; // Declared globally

void showExtern() {
    extern int globalVar; // Telling the compiler it's defined elsewhere
    cout << "Value: " << globalVar << endl;
    globalVar = 10; // Modify globalVar
}

int main() {
    showExtern();
    return 0;
}