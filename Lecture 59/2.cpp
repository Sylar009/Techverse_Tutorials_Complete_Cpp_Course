#include <stdio.h>

int main() {
    int num = 25;
    float value = 12.5;

    void* ptr; // Void pointer declaration
    ptr = &num;
    printf("Integer: %d\n", *((int*)ptr));

    ptr = &value;
    printf("Float: %.2f\n", *((float*)ptr));

    return 0;
}
