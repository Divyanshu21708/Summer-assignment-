/* Program to find a pair with a given sum in an array */

#include <stdio.h>

void findPairWithSum(int arr[], int size, int targetSum) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("%d %d\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No pair found\n");
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int targetSum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    findPairWithSum(arr, size, targetSum);

    return 0;
}