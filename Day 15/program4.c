/* Program to move all zeroes to the end of an array in C */

#include <stdio.h>

void moveZeroes(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    moveZeroes(arr, size);

    printArray(arr, size);

    return 0;
}