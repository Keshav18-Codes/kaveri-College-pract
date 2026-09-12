//Write a program to interchange value of two variables using pointers.

#include<stdio.h>

int main() {
    int a, b, temp; // Declare two variables and a temporary variable
    int *ptr1 = &a; // Pointer to the first variable
    int *ptr2 = &b; // Pointer to the second variable

    // Input values
    printf("Enter two numbers:\n");
    scanf("%d%d", ptr1, ptr2);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", *ptr1, *ptr2);

    // Interchange values using a temporary variable
    temp = *ptr1; // Store the value of a in temp
    *ptr1 = *ptr2; // Assign the value of b to a
    *ptr2 = temp; // Assign the value of temp (original a) to b

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", *ptr1, *ptr2);

    return 0;
}
