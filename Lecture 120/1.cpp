#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate(int a) {
        cout << "Square of " << a << " is " << a * a << endl;
    }

    void calculate(double a) {
        cout << "Cube of " << a << " is " << a * a * a << endl;
    }

    void calculate(int a, int b) {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

int main() {
    Calculator calc;
    calc.calculate(5);
    calc.calculate(3.5);
    calc.calculate(10, 20);
    return 0;
}
