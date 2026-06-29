/* Program to write function for palindrome */

#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num = 121;

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}