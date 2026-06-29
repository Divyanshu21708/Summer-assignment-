/* Write a program to find the nth Fibonacci term. */

#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, next_term;

    printf("Enter the position (n) of the Fibonacci term: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a position greater than or equal to 1.\n");
        return 1;
    }

    if (n == 1) {
        printf("The 1st Fibonacci term is %lld\n", t1);
        return 0;
    }
    
    if (n == 2) {
        printf("The 2nd Fibonacci term is %lld\n", t2);
        return 0;
    }

    for (i = 3; i <= n; i++) {
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }

    printf("The %dth Fibonacci term is %lld\n", n, t2);

    return 0;
}