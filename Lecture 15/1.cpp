// Optimized function to find maximum of two integers
#include <iostream>
using namespace std;

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int val1 = 12, val2 = 25;
    cout << "Maximum value: " << findMax(val1, val2);
    return 0;
}