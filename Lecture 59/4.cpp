#include <stdio.h>

int main() {
    int* wildPtr; // Uninitialized wild pointer
    int number = 100;

    wildPtr = &number; // Initialized now
    printf("Value: %d\n", *wildPtr);

    return 0;
}
