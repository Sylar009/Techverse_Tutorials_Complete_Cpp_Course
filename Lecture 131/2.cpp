#include <iostream>
using namespace std;

int calculateSum(int a = 0, int b = 0, int c) {  // Incorrect placement
    return (a + b + c);
}

int main() {
    cout << calculateSum(10);
    return 0;
}
