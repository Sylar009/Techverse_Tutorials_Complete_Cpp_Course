#include <iostream>
using namespace std;

int main() {
    char message[] = "Techverse Tutorials";
    char character = 'X';

    cout.write(message, 8); // Print first 8 characters
    cout.put(character);    // Print character

    return 0;
}