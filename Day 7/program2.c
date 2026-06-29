/* Question: Write a program to find the nth Fibonacci number using recursion. */

#include <stdio.h>

int findFibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return findFibonacci(n - 1) + findFibonacci(n - 2);
}

int main() {
    int num, result;

    printf("Enter the position (n) for Fibonacci series: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        result = findFibonacci(num);
        printf("The Fibonacci number at position %d is: %d\n", num, result);
    }

    return 0;
}