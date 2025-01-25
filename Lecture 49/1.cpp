#include <iostream>
using namespace std;

int sum(int x, int y) {
    // Returns the sum of x and y
    return x + y;
}

int main() {
    int num1 = 8, num2 = 12;
    int result = sum(num1, num2);
    cout << "The sum is: " << result;
    return 0;
}