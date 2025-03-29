#include <iostream>
using namespace std;

void display(int a, double b) {
    cout << "Integer and Double: " << a << ", " << b;
}

void display(double a, int b) {
    cout << endl << "Double and Integer: " << a << ", " << b;
}

int main() {
    display(10, 3.5);
    display(2.5, 20);
    return 0;
}
