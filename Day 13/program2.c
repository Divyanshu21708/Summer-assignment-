/* Program to find sum and average of array */

#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}