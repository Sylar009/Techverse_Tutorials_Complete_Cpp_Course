#include <iostream>
using namespace std;

int main() {
    double number = 3.14159265;

    cout.precision(3);
    cout << number << endl;

    cout.precision(6);
    cout << number << endl;

    return 0;
}