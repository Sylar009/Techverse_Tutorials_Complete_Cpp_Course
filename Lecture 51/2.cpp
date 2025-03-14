#include <stdio.h>

// Function Prototype
void exchange(int *first, int *second);

int main() {
    int num1 = 15, num2 = 30;

    // Call by Reference
    exchange(&num1, &num2);

    printf("Inside Caller:\nnum1 = %d num2 = %d\n", num1, num2);

    return 0;
}

// Function to exchange two numbers using pointers
void exchange(int *first, int *second) {
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;

    printf("Inside Function:\nfirst = %d second = %d\n", *first, *second);
}
