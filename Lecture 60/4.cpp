#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    return array;
}

int main() {
    int* dynamicArray = allocateArray(5);
    // Initialize array with values
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 10;
        printf("%d ", dynamicArray[i]);
    }
    free(dynamicArray);
    return 0;
}