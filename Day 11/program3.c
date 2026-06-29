/* Program to write function for fibonacci */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int term = 6;
    int result;

    result = fibonacci(term);
    printf("The %dth Fibonacci number is: %d\n", term, result);

    return 0;
}