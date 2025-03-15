#include <stdio.h>

void calculateSize(int (*arrayPtr)[5]) {
    printf("Size of array: %lu bytes\n", sizeof(*arrayPtr));
}

int main() {
    int data[5];
    calculateSize(&data);
    return 0;
}