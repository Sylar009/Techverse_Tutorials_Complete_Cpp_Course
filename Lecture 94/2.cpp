#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); // Dynamic memory allocation
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    free(arr); // Free allocated memory
    return 0;
}
