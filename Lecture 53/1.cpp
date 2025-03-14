#include <iostream>
using namespace std;

int calculateSum(int number) {
    if (number == 0) // Base Condition
        return 0;

    return number + calculateSum(number - 1); // Recursive Call
}

int main() {
    int total = calculateSum(5);
    cout << "Sum = " << total;
    return 0;
}