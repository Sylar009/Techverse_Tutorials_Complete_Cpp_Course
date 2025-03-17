#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 2 numbers: " << calc.add(10, 20) << endl;
    cout << "Sum of 3 numbers: " << calc.add(10, 20, 30) << endl;
    return 0;
}