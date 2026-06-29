#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        temp = -num;
    } else {
        temp = num;
    }

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("The sum of the digits of %d is %d\n", num, sum);

    return 0;
}