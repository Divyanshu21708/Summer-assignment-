/* Question: Write a program to find the factorial of a number using recursion. */

#include <stdio.h>

long long findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    long long factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        factorial = findFactorial(num);
        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}