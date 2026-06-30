/* Program to rotate an array left by d positions */

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int d, int size) {
    if (size == 0) return;
    d = d % size;
    
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, size - 1);
    reverseArray(arr, 0, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, d;

    scanf("%d %d", &size, &d);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    leftRotate(arr, d, size);

    printArray(arr, size);

    return 0;
}