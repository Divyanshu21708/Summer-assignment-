/* Program to reverse an array in C */

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    reverseArray(arr, size);

    printArray(arr, size);

    return 0;
}