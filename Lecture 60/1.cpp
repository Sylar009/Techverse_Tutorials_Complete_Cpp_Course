#include <stdio.h>

void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 15, num2 = 30;
    swapValues(&num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}