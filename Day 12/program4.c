/* Program to write function for perfect number */

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num = 28;

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}