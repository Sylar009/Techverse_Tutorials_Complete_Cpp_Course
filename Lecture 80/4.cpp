#include <iostream>
using namespace std;

enum Colors { Red, Green, Blue };

int main() {
    Colors c1 = Red;
    Colors c2 = Green;

    cout << "Red: " << c1 << endl;
    cout << "Green: " << c2 << endl;

    return 0;
}