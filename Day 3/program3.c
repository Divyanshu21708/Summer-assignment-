/* Write a program to find the Greatest Common Divisor (GCD) of two numbers. */

#include <stdio.h>

int main() {
    int n1, n2, a, b, temp;

    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    a = n1;
    b = n2;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % temp;
        a = temp;
    }

    printf("The GCD of %d and %d is %d\n", n1, n2, a);

    return 0;
}