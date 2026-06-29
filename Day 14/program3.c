/* Program to find the second largest element in an array */

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Single-pass logic to find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest unique element.\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}