#include <stdio.h>

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int (*matrixPtr)[2][2] = &matrix;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", (*matrixPtr)[i][j]);
        }
        printf("\n");
    }

    return 0;
}