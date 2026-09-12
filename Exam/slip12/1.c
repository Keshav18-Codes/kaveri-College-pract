#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
void checkPrime(int *num, bool *isPrime) {
    if (*num <= 1) {
        *isPrime = false; // Numbers less than or equal to 1 are not prime
        return;
    }

    for (int i = 2; i * i <= *num; i++) {
        if (*num % i == 0) {
            *isPrime = false; // Found a divisor, not prime
            return;
        }
    }
    *isPrime = true; // No divisors found, it is prime
}

int main() {
    int number;
    bool isPrime;

    // Accept input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    checkPrime(&number, &isPrime); // Pass the address of number and isPrime

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}