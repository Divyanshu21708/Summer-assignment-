/* Program to write function to find maximum */

#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 15, b = 25;
    int max;

    max = findMax(a, b);
    printf("Maximum between %d and %d is: %d\n", a, b, max);

    return 0;
}