#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[] = "Learn-C++-Programming";
    char* token = strtok(text, "-");

    while (token != nullptr) {
        cout << token << endl;
        token = strtok(nullptr, "-");
    }

    return 0;
}
