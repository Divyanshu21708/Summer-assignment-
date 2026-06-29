/* Question: Write a program to find the largest prime factor of a given number in C. */

#include <stdio.h>

int main() {
    int num, originalNum, i;
    int maxPrimeFactor = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num % 2 == 0) {
        maxPrimeFactor = 2;
        num /= 2;
    }

    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrimeFactor = i;
            num /= i;
        }
    }

    if (num > 2) {
        maxPrimeFactor = num;
    }

    if (maxPrimeFactor != -1) {
        printf("The largest prime factor of %d is: %d\n", originalNum, maxPrimeFactor);
    } else {
        printf("%d has no prime factors.\n", originalNum);
    }

    return 0;
}