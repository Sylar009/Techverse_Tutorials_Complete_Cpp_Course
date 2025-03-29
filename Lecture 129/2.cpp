#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

float calculate(float x, float y) {
    return x * y;
}

int main() {
    cout << "Sum: " << calculate(10, 20) << endl;
    cout << "Product: " << calculate(2.5f, 4.5f) << endl;
    return 0;
}
