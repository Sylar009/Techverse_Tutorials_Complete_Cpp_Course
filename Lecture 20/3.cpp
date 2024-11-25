#include <iostream>
using namespace std;

int main() {
    const int number = 15;
    const int* ptr = &number;

    // Removing const using const_cast
    int* modifiablePtr = const_cast<int*>(ptr);
    *modifiablePtr = 30;

    cout << "Modified value: " << *modifiablePtr << endl;
    return 0;
}