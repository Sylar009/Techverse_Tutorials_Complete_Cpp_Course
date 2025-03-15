#include <iostream>
using namespace std;

void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int first = 50, second = 30;

    cout << "Before Swap:" << endl;
    cout << "First: " << first << " Second: " << second << endl;

    swapNumbers(&first, &second);

    cout << "After Swap (Using Pointer):" << endl;
    cout << "First: " << first << " Second: " << second << endl;

    return 0;
}
