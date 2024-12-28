#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;
    float pi = 3.14159;

    cout << setw(10) << setfill('-') << num << endl;
    cout << setprecision(4) << fixed << pi << endl;
    cout << "Hex: " << setbase(16) << num << endl;

    return 0;
}