#include <iostream>
using namespace std;

int calculateSum(int a, int b = 0, int c = 0) {
    return (a + b + c);
}

int main() {
    cout << calculateSum(10);  // Uses default values for b and c
    return 0;
}
