#include <stdio.h>
#include <stdlib.h>

int main() {
    int* number = (int*)malloc(sizeof(int)); // Dynamic memory allocation
    *number = 50; // Assign value
    printf("Before freeing: %d\n", *number);

    free(number); // Memory freed
    number = NULL; // Avoid dangling
    printf("Pointer is now NULL.\n");

    return 0;
}
