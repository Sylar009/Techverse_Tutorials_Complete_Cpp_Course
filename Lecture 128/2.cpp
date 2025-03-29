#include <iostream>
using namespace std;

void calculate(int a, int b) {
    cout << "Sum of two = " << (a + b);
}

void calculate(int a, int b, int c) {
    cout << endl << "Sum of three = " << (a + b + c);
}

int main() {
    calculate(5, 10);
    calculate(1, 2, 3);
    return 0;
}
