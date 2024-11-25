#include <iostream>
using namespace std;

int demoStatic() {
    static int counter = 0;
    counter++;
    return counter;
}

int main() {
    cout << demoStatic() << endl; // Output: 1
    cout << demoStatic() << endl; // Output: 2
    return 0;
}