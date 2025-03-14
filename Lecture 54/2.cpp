#include <iostream>
using namespace std;

class Calculator {
    int num1, num2;

public:
    inline void setValues(int a, int b) {
        num1 = a;
        num2 = b;
    }

    inline int add() { return num1 + num2; }
    inline int multiply() { return num1 * num2; }
};

int main() {
    Calculator calc;
    calc.setValues(10, 20);
    cout << "Addition: " << calc.add() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    return 0;
}