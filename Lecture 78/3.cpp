#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[] = "C++-is-fun";
    char* savePointer;
    char* token = strtok_r(text, "-", &savePointer);

    while (token != nullptr) {
        cout << token << endl;
        token = strtok_r(nullptr, "-", &savePointer);
    }

    return 0;
}
