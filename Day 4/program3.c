/* Write a program to check whether a given number is an Armstrong number or not. */

#include <stdio.h>

int main() {
    int num, original_num, temp, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }

    original_num = num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * remainder;
        }
        
        result = result + power;
        temp = temp / 10;
    }

    if (result == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is not an Armstrong number.\n", original_num);
    }

    return 0;
}