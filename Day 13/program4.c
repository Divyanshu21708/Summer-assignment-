/* Program to count even and odd elements in an array with user input */

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nTotal even elements = %d\n", evenCount);
    printf("Total odd elements = %d\n", oddCount);

    return 0;
}