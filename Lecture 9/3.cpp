#include <iostream>
using namespace std;

#define SIDE_LENGTH 4

int main() {
    int area = SIDE_LENGTH * SIDE_LENGTH;  // Macro constant usage
    cout << "Area of the Square: " << area << endl;
    // SIDE_LENGTH = 55; // error
    return 0;
}