#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        number /= 10; // Remove the last digit from the number
    }

    // Check if the original number and the reversed number are the same
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}