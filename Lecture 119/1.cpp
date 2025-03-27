#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2, result;

public:
    void addNumbers(int x, int y) {
        num1 = x;
        num2 = y;
        result = num1 + num2;
        cout << "The sum is: " << result << endl;
    }
};

int main() {
    Calculator calc;
    calc.addNumbers(8, 12);
    return 0;
}
