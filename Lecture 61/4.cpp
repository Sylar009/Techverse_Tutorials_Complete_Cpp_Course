#include <iostream>
using namespace std;

int main() {
    nullptr_t n1, n2;
    if (n1 >= n2) {
        cout << "Comparison works\n";
    }
    char *p = n1;
    if (p == nullptr) {
        cout << "Pointer is null\n";
    }
    return 0;
}