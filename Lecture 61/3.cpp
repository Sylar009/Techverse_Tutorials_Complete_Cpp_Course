#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;
    if (ptr) {
        cout << "Pointer is not null";
    } else {
        cout << "Pointer is null";
    }
    return 0;
}