/* Program to find the frequency of an element in an array */

#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);

    // Logic to count frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}