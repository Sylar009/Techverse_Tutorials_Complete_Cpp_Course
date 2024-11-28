#include <iostream>
using namespace std;

int main() {
    int x = 8;
    int y = -++x; // Increment first, then negate
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}