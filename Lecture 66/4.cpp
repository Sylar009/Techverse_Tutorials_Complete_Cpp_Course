#include <stdio.h>

// Function to calculate sum and product
void calculate(int a, int b, int* sum, int* product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int sum, product;
    calculate(5, 10, &sum, &product);
    printf("Sum: %d, Product: %d\n", sum, product);
    return 0;
}
