#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.45678;
    cout << "Default: " << num << endl;
    cout << "Fixed precision (2): " << fixed << setprecision(2) << num << endl;
    cout << "Width 10: " << setw(10) << num << endl;
    return 0;
}