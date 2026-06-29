/* Question: Write a program to find x^n without pow in C. */

#include <stdio.h>

int main() {
    double x, result = 1.0;
    int n, i, a;

    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    a= n < 0 ? -n : n;

    for (i = 1; i <= a; i++) {
        result *= x;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf^%d = %.6lf\n", x, n, result);

    return 0;
}