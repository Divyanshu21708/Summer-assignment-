/* Write a program to find and print all the prime numbers within a given range. */

#include <stdio.h>

int main() {
    int start, end, i, j, is_prime;

    printf("Enter the starting and ending numbers of the range: ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }

        is_prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}