#include <iostream>
using namespace std;

void exchange(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int a = 8, b = 15;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    exchange(&a, &b);

    cout << "After Swap: a = " << a << ", b = " << b << endl;
    return 0;
}
