/* Program to merge two sorted arrays */

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

    int totalSize = size1 + size2;
    int mergedArr[totalSize];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }

    for (int m = 0; m < totalSize; m++) {
        printf("%d ", mergedArr[m]);
    }
    printf("\n");

    return 0;
}