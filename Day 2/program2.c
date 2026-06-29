#include <stdio.h>

int main() {
    int num, temp, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp = temp / 10;
    }

    printf("The reversed number is: %d\n", reversed);

    return 0;
}