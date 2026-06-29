/* Question: Write a program to check whether a given number is a strong number or not in C. */

#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0, i;
    long fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while(num > 0) {
        rem = num % 10;
        fact = 1;

        for(i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == originalNum && originalNum > 0) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}