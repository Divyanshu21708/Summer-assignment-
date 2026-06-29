/* Program to write function for Armstrong */

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of power of digits
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits));
        temp /= 10;
    }

    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num = 153;

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}