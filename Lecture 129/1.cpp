#include <iostream>
using namespace std;

// Function 1
int getValue() { 
    return 42; 
}

// Function 2
char getValue() { 
    return 'A'; 
}

int main() {
    char result = getValue(); // Compiler Error
    return 0;
}
