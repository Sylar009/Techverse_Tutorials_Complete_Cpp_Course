#include <iostream>
#include <string>
using namespace std;

int main() {
    string part1 = "Hello";
    string part2 = " World";

    // Manual concatenation using loop
    for (char c : part2) {
        part1 += c;
    }

    cout << part1;
    return 0;
}
