#include <iostream>
using namespace std;

void displayPointer() {
    int value = 15;
    int *pointer = &value;
    cout << "Memory Address: " << pointer << endl;
    cout << "Value: " << *pointer << endl;
}

int main() {
    displayPointer();
    return 0;
}