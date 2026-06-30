/* Write a program in C to implement Binary Search on an array. */

#include <stdio.h>

int main() {
    int size, target;

    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    int low = 0;
    int high = size - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1) {
        printf("%d\n", foundIndex);
    } else {
        printf("-1\n");
    }

    return 0;
}