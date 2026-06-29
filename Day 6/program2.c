/* Question: Write a program to convert a given binary number to decimal in C. */

#include <stdio.h>

int main() {
    long long binary, temp;
    int decimal = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp > 0) {
        remainder = temp % 10;
        decimal += remainder * base;
        base *= 2;
        temp /= 10;
    }

    printf("The decimal value of %lld is: %d\n", binary, decimal);

    return 0;
}