#include <iostream>
using namespace std;

// Function with default argument
void displayNumber(int number = 15) {
    cout << "The number is: " << number << endl;
}

int main() {
    displayNumber(); // Uses default value
    displayNumber(45); // Uses provided value
    return 0;
}
