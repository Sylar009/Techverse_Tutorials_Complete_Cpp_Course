#include <iostream>
using namespace std;

int main() {
    for (int x = 1, y = 2; x <= 3; x++, y += 2) {
        cout << "x: " << x << ", y: " << y << endl;
    }
    return 0;
}
