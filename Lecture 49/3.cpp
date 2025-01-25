#include <iostream>
using namespace std;

void checkNumber(int num) {
    if (num < 0) {
        cout << "Negative numbers are not allowed.";
        return; // Exit function
    }
    cout << "The number is: " << num;
}

int main() {
    checkNumber(-5);
    return 0;
}