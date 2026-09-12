#include <stdio.h>

void reverseNumber(int *num) {
    int reversed = 0;
    int original = *num;

    while (original != 0) {
        int digit = original % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        original /= 10; // Remove the last digit
    }

    *num = reversed; // Store the reversed number back to the original variable
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    reverseNumber(&number); // Pass the address of number to the function

    printf("Reversed number: %d\n", number);

    return 0;
}