#include <iostream>
using namespace std;

int main() {
    int value = 25;  // Initializing the value

    if (value >= 0 && value <= 10) {
        cout << "Value is between 0 and 10\n";
    } else if (value >= 11 && value <= 15) {
        cout << "Value is between 11 and 15\n";
    } else if (value >= 16 && value <= 20) {
        cout << "Value is between 16 and 20\n";
    } else {
        cout << "Value is greater than 20\n";
    }

    return 0;
}