#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    swap(num1, num2);
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;
    return 0;
}