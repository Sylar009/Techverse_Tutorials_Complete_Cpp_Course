#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated successfully using malloc.\n");
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}