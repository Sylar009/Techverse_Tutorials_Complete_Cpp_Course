#include <iostream>
using namespace std;

void display(int x, double y) {
    cout << "Integer and Double: " << x << ", " << y << endl;
}

void display(double x, int y) {
    cout << "Double and Integer: " << x << ", " << y << endl;
}

int main() {
    display(10, 20.5);
    display(15.5, 25);
    return 0;
}