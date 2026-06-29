#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculating the sum directly using the formula
    sum = n * (n + 1) / 2;
    
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}