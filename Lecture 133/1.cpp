#include <iostream>
using namespace std;

void compute(int x) {
    cout << "Integer: " << x << endl;
}

void compute(float y) {
    cout << "Float: " << y << endl;
}

void compute(int x, float y) {
    cout << "Integer: " << x << " and Float: " << y << endl;
}

int main() {
    compute(10);          // Calls integer version
    compute(5.5f);        // Calls float version
    compute(7, 3.3f);     // Calls mixed version
    return 0;
}
