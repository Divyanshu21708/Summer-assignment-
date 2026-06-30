/* Program to find the intersection of two sorted arrays */

#include <stdio.h>

int main() {
    int size1, size2;

    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        while (i > 0 && i < size1 && arr1[i] == arr1[i - 1]) {
            i++;
        }
        while (j > 0 && j < size2 && arr2[j] == arr2[j - 1]) {
            j++;
        }

        if (i >= size1 || j >= size2) {
            break;
        }

        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    printf("\n");

    return 0;
}