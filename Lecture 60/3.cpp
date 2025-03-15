#include <math.h>
#include <stdio.h>

void calculateValues(int num, int* square, double* root) {
    *square = num * num;
    *root = sqrt(num);
}

int main() {
    int number = 36;
    int sq;
    double sqrtVal;
    calculateValues(number, &sq, &sqrtVal);
    printf("Square: %d, Square Root: %.2f\n", sq, sqrtVal);
    return 0;
}