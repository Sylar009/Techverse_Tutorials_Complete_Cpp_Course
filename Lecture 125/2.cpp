#include <iostream>
using namespace std;

void calculateSum(int x, int y) {
    cout << "Sum of two numbers: " << (x + y) << endl;
}

void calculateSum(int x, int y, int z) {
    cout << "Sum of three numbers: " << (x + y + z) << endl;
}

int main() {
    calculateSum(10, 20);
    calculateSum(5, 15, 25);
    return 0;
}