#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int* intPtr = &number;

    // Reinterpreting as char pointer
    char* charPtr = reinterpret_cast<char*>(intPtr);

    cout << "Integer Address: " << intPtr << endl;
    cout << "Reinterpreted Address: " << static_cast<void*>(charPtr) << endl;

    return 0;
}