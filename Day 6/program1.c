/* Question: Write a program to find the binary representation of a given decimal number in C. */

#include <stdio.h>

int main() {
    int decimal, temp, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;

    while (temp > 0) {
        remainder = temp % 2;
        binary += remainder * place;
        place *= 10;
        temp /= 2;
    }

    printf("The binary representation of %d is: %lld\n", decimal, binary);

    return 0;
} 