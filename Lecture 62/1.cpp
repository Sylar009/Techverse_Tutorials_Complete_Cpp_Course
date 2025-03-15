#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int &alias = value;
    alias = 100;
    cout << "Value = " << value << endl;
    return 0;
}