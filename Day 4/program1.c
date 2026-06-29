/* Write a program to print the Fibonacci series up to a given number of terms. */

#include <stdio.h>

int main() {
    int terms, i;
    int t1 = 0, t2 = 1, next_term;

    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= terms; i++) {
        printf("%d ", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }

    printf("\n");
    return 0;
}