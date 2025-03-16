#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char part1[20] = "Hello";
    char part2[] = " World";

    // Concatenating using strcat()
    strcat(part1, part2);

    cout << part1;
    return 0;
}
