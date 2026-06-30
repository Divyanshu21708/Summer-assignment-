/* Program to find the maximum frequency element in an array */

#include <stdio.h>

int findMaxFrequencyElement(int arr[], int size) {
    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxFreqElement = findMaxFrequencyElement(arr, size);

    printf("%d\n", maxFreqElement);

    return 0;
}