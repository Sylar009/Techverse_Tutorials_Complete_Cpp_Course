#include <iostream>
using namespace std;

void checkNumber(int num) {
    if (num % 2 == 0) {
        cout << num << " is even.\n";
        return; // Exit the function
    }
    cout << num << " is odd.\n";
}

int main() {
    checkNumber(8);
    return 0;
}