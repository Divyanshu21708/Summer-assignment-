/* Write a program in C to check if a matrix is symmetric. */

#include <stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    int matrix[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }

    return 0;
}