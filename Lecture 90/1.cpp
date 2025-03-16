#include <iostream>
using namespace std;

int main() {
    int* number = new int;
    *number = 20;

    cout << "Address: " << number << endl;
    cout << "Value: " << *number << endl;

    delete number;  // Free the allocated memory
    return 0;
}