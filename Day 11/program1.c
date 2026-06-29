/* Program to write function to find sum of two numbers */

#include <stdio.h>

int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a = 10, b = 20;
    int sum;

    sum = findSum(a, b);
    printf("Sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}