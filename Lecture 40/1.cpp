#include <iostream>
using namespace std;

int main() {
    int num1 = 12, num2 = 25, num3 = 9;

    if (num1 > num2) {
        if (num1 > num3) {
            cout << num1 << " is the greatest.";
        } else {
            cout << num3 << " is the greatest.";
        }
    } else {
        if (num2 > num3) {
            cout << num2 << " is the greatest.";
        } else {
            cout << num3 << " is the greatest.";
        }
    }

    return 0;
}