#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5, newSize, i;
    
    arr = (int*)calloc(size, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated using calloc.\n");
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    
    newSize = 10;
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    for (i = size; i < newSize; i++) {
        arr[i] = i + 1;
    }
    
    printf("Resized array elements: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}