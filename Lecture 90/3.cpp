#include <iostream>
using namespace std;

int main() {
    int* value = new(nothrow) int;
    if (!value) {
        cout << "Memory allocation failed!" << endl;
    } else {
        *value = 50;
        cout << "Value: " << *value << endl;
        delete value;
    }

    return 0;
}