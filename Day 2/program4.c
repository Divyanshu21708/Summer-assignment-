#include <stdio.h>

int main() {
    int num, temp, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("%d is not a palindrome number.\n", num);
        return 0;
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp = temp / 10;
    }

    if (num == reversed) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}