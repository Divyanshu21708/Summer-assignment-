/* Write a program in C to subtract two matrices. */

#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int matrix2[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int difference[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}