#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout << "Integer sum = " << (a + b);
}

void sum(double x, double y) {
    cout << endl << "Double sum = " << (x + y);
}

int main() {
    sum(10, 20);
    sum(3.5, 2.5);
    return 0;
}
