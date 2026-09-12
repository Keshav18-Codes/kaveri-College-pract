#include <stdio.h>

void generateFibonacci(int *limit) {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d: ", *limit);
    
    // Print the Fibonacci series until the next number exceeds the limit
    while (a <= *limit) {
        printf("%d ", a);
        next = a + b; // Calculate the next Fibonacci number
        a = b;        // Update a to the next number
        b = next;     // Update b to the next number
    }
    printf("\n");
}

int main() {
    int limit;

    // Input from the user
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    // Call the function to generate Fibonacci series
    generateFibonacci(&limit);

    return 0;
}