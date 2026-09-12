#include <stdio.h>

void calculateSumAndProduct(int *numbers, int n, int *sumEven, int *productOdd) {
    *sumEven = 0; // Initialize sum of even digits
    *productOdd = 1; // Initialize product of odd digits
    int hasOdd = 0; // Flag to check if there are any odd digits
    int i;
    
    for (i = 0; i < n; i++) {
        int num = numbers[i];

        // Process each digit of the number
        while (num > 0) {
            int digit = num % 10; // Get the last digit
            num /= 10; // Remove the last digit

            if (digit % 2 == 0) {
                *sumEven += digit; // Add to sum if even
            } else {
                *productOdd *= digit; // Multiply if odd
                hasOdd = 1; // Set flag indicating at least one odd digit
            }
        }
    }

    // If there were no odd digits, set product to 0
    if (!hasOdd) {
        *productOdd = 0;
    }
}

int main() {
    int n,i;

    // Accept the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];

    // Accept the integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int sumEven, productOdd;

    // Call the function to calculate sum and product
    calculateSumAndProduct(numbers, n, &sumEven, &productOdd);

    // Display the results
    printf("Sum of even digits: %d\n", sumEven);
    printf("Product of odd digits: %d\n", productOdd);

    return 0;
}