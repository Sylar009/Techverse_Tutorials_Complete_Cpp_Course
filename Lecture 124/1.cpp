#include <iostream>
using namespace std;

// Base class
class Calculator {
    int num1, num2;

public:
    void add(int a, int b) {
        num1 = a;
        num2 = b;
        cout << "Addition of " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }
};

// Derived class
class AdvancedCalculator : public Calculator {
public:
    void calculateAndPrint(int x, int y) {
        add(x, y); // Calling base class method
    }
};

int main() {
    AdvancedCalculator calc;
    calc.calculateAndPrint(7, 3); // Example usage
    return 0;
}
