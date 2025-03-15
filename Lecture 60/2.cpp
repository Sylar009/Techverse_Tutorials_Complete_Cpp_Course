#include <stdio.h>

int main() {
    int numbers[] = {101, 202, 303, 404};
    printf("%d %d\n", numbers[2], *(numbers + 2));
    return 0;
}