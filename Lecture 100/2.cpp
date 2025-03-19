#include <iostream>
using namespace std;

class Calculator {
public:
    int result = 0;

    Calculator(int num1, int num2 = 0) {
        result = num1 + num2;
    }

    void display() { cout << "Result = " << result << endl; }
};

int main() {
    Calculator obj1(10, 20); // Overrides default value
    Calculator obj2(5);      // Uses default value for num2
    obj1.display();
    obj2.display();
    return 0;
}
