#include <iostream>
using namespace std;

// Class to demonstrate abstraction
class AbstractDemo {
private:
    int num1, num2;

public:
    void setValues(int x, int y) {
        num1 = x;
        num2 = y;
    }

    void displayValues() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    AbstractDemo obj;
    obj.setValues(15, 25);
    obj.displayValues();
    return 0;
}
