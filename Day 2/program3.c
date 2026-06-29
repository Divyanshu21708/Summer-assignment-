#include <stdio.h>

int main() {
    int num, temp, digit;
    int product = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {
        product = 0;
    } else {
        if (num < 0) {
            temp = -num;
        } else {
            temp = num;
        }

        while (temp > 0) {
            digit = temp % 10;
            product = product * digit;
            temp = temp / 10;
        }
    }

    printf("The product of the digits of %d is %d\n", num, product);

    return 0;
}