#include <stdio.h>

void calculateEvenSumAndOddProduct(int *arr, int n) {
    int evenSum = 0;
    int oddProduct = 1;
    int hasOdd = 0; // To check if there are any odd numbers

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i]; // Sum of even numbers
        } else {
            oddProduct *= arr[i]; // Product of odd numbers
            hasOdd = 1; // Mark that we have at least one odd number
        }
    }

    printf("Sum of even numbers: %d\n", evenSum);
    if (hasOdd) {
        printf("Product of odd numbers: %d\n", oddProduct);
    } else {
        printf("No odd numbers entered.\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    calculateEvenSumAndOddProduct(arr, n);
    return 0;
}
