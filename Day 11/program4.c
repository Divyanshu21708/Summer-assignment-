/* Program to write function to find factorial */

#include <stdio.h>

long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;
    long long result;

    result = findFactorial(num);
    printf("Factorial of %d is: %lld\n", num, result);

    return 0;
}