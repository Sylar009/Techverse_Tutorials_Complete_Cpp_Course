#include <iostream>
using namespace std;

int main() {
    int number = 50;
    int &alias = number;
    alias = 100;  // Updates 'number' too
    cout << "Original value: " << number << endl;
    return 0;
}