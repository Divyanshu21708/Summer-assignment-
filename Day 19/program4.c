
/* Write a program in C to find the sum of diagonals of a matrix. */

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

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < size; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][size - i - 1];
    }

    printf("%d %d\n", primarySum, secondarySum);

    return 0;
}