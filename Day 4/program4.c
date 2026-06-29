/* Write a program to find and print all Armstrong numbers within a given range. */

#include <stdio.h>

int main() {
    int start, end, i, temp, remainder, digits, result, power, j;

    printf("Enter the starting and ending numbers of the range: ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 0) {
            continue;
        }

        digits = 0;
        temp = i;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        result = 0;
        temp = i;
        while (temp > 0) {
            remainder = temp % 10;

            power = 1;
            for (j = 0; j < digits; j++) {
                power = power * remainder;
            }

            result = result + power;
            temp = temp / 10;
        }

        if (result == i && i != 0) {
            printf("%d ", i);
        } else if (i == 0 && result == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}