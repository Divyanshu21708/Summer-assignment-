/* Program to find duplicate elements in an array */

#include <stdio.h>

int main() {
    int n, foundDuplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // Array to keep track of elements we've already printed as duplicates
    int visited[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array with 0
    }

    printf("\nDuplicate elements in the array are: \n");
    
    // Nested loops to compare each element with all other elements
    for (int i = 0; i < n; i++) {
        // If the element is already processed as a duplicate, skip it
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited so it isn't printed again
            }
        }

        // If an element occurs more than once, it's a duplicate
        if (count > 1) {
            printf("%d (appears %d times)\n", arr[i], count);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("No duplicate elements found.\n");
    }

    return 0;
}