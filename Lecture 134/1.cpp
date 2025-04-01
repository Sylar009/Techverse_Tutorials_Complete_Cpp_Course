#include <iostream>
using namespace std;

// Function to print an integer
void display(int number) {
    cout << "Integer: " << number << endl;
}

// Function to print a float
void display(float number) {
    cout << "Float: " << number << endl;
}

// Function to print a string
void display(const char* text) {
    cout << "String: " << text << endl;
}

int main() {
    display(20);          // Calls integer version
    display(3.14f);       // Calls float version
    display("C++ Rocks"); // Calls string version
    return 0;
}
