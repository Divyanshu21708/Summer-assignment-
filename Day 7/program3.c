/* Question: Write a program to find the sum of digits of a number using recursion. */

#include <stdio.h>

int findSumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + findSumOfDigits(n / 10);
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int absNum = num < 0 ? -num : num;

    result = findSumOfDigits(absNum);
    printf("The sum of digits of %d is: %d\n", num, result);

    return 0;
}