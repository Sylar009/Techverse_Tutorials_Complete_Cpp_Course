#include <stdio.h>

int main() {
    int numbers[3] = {10, 20, 30};
    int (*arrPtr)[3] = &numbers;

    for (int i = 0; i < 3; i++) {
        printf("%d ", (*arrPtr)[i]);
    }

    return 0;
}