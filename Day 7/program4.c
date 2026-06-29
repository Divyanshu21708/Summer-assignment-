/* Question: Write a program to find the reverse of a number using recursion. */

#include <stdio.h>

int findReverse(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return findReverse(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        result = -findReverse(-num, 0);
    } else {
        result = findReverse(num, 0);
    }

    printf("The reverse of %d is: %d\n", num, result);

    return 0;
}