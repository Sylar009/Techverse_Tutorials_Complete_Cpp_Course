#include <iostream>
using namespace std;

int main() {
    int number = 5;
    int totalSum = 0;

    // While loop to calculate the sum of natural numbers
    while (number > 0) {
        totalSum += number;
        number--;
    }

    cout << "Sum: " << totalSum;
    return 0;
}
