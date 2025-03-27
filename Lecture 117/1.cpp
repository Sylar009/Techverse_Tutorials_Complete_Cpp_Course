#include <iostream>
using namespace std;

class HalfCalculator {
private:
    int inputValue; // Private data member
    int result; // Private data member

public:
    int calculateHalf(int value) {
        inputValue = value;
        result = inputValue / 2; // Logic for calculating half
        return result;
    }
};

int main() {
    int userInput;
    cin >> userInput; // Taking user input
    HalfCalculator calc; // Object creation
    int output = calc.calculateHalf(userInput);
    cout << output << endl; // Output the result
    return 0;
}
