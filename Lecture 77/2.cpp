#include <iostream>
#include <string>
using namespace std;

int main() {
    string part1 = "Hello";
    string part2 = " World";

    // Concatenating using append()
    part1.append(part2);

    cout << part1;
    return 0;
}
