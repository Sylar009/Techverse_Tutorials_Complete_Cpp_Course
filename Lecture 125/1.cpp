#include <iostream>
using namespace std;

void calculateSum(int x, int y) {
    cout << "Integer sum: " << (x + y) << endl;
}

void calculateSum(double x, double y) {
    cout << "Double sum: " << (x + y) << endl;
}

int main() {
    calculateSum(10, 20);
    calculateSum(5.5, 6.5);
    return 0;
}