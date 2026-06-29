/* Question: Write a program to count set bits in a number in C. */

#include <stdio.h>

int main() {
    int num, originalNum, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        count += (num & 1);
        num >>= 1;
    }

    printf("The total number of set bits in %d is: %d\n", originalNum, count);

    return 0;
}