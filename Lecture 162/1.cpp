#include <iostream>
using namespace std;

void processOne() {
    cout << "\n processOne Start ";
    throw 50;
    cout << "\n processOne End "; // This won't execute due to throw
}

void processTwo() {
    cout << "\n processTwo Start ";
    processOne();
    cout << "\n processTwo End "; // This won't execute due to throw
}

void processThree() {
    cout << "\n processThree Start ";
    try {
        processTwo();
    } catch (int ex) {
        cout << "\n Exception Caught: " << ex;
    }
    cout << "\n processThree End";
}

int main() {
    processThree();
    return 0;
}
