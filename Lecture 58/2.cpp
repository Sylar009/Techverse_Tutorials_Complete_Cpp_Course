#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Initial Address: " << ptr << endl;
    ptr += 3;
    cout << "After Adding 3: " << ptr << endl;

    return 0;
}