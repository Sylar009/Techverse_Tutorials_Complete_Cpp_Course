#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int* ptr = &num;

    cout << "Initial Address: " << ptr << endl;
    ptr -= 2;
    cout << "After Subtracting 2: " << ptr << endl;

    return 0;
}