#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at address a in temp
    *a = *b;   // Assign the value at address b to address a
    *b = temp; // Assign the value in temp to address b
}

int main() {
    int x, y;

    // Accept input for the two variables
    printf("Enter two integers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    // Display values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y); // Pass the addresses of x and y

    // Display values after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}