#include<stdio.h>

void reverseNumber(int *num) {
    int reversed = 0, remainder;
    int original = *num; // Store the original number

    // Reverse the number
    while (*num != 0) {
        remainder = *num % 10;
        reversed = reversed * 10 + remainder;
        *num /= 10;
    }

    // Display the result
    printf("The reverse of %d is %d\n", original, reversed);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    reverseNumber(&number);
    return 0;
}
