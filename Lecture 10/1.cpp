#include <iostream>
using namespace std;

void displayAge() {
    int age = 20;  // Local variable
    cout << "Age: " << age << endl;
}

// age = 88; // error

int main() {
    displayAge();
    return 0;
}