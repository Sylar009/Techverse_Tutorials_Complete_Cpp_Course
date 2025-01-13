#include <iostream>
using namespace std;

int main() {
    int input;

    // Do-while loop for input validation
    do {
        cout << "Enter a positive number: ";
        cin >> input;
    } while (input <= 0);

    cout << "You entered: " << input << endl;

    return 0;
}
