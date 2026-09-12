#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, count = 0;
    int *arr, *nonZeroArr;
    float sum = 0.0, average;

    // Accept the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Accept the integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count non-zero elements and allocate memory for non-zero array
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }

    // Dynamically allocate memory for non-zero elements
    nonZeroArr = (int *)malloc(count * sizeof(int));
    if (nonZeroArr == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    // Copy non-zero elements to the new array
    count = 0; // Reset count for non-zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            nonZeroArr[count] = arr[i];
            sum += arr[i]; // Calculate sum of non-zero elements
            count++;
        }
    }

    // Calculate average
    if (count > 0) {
        average = sum / count;
    } else {
        average = 0; // Avoid division by zero
    }

    // Display results
    printf("Non-zero elements:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", nonZeroArr[i]);
    }
    printf("\nSum of non-zero elements: %.2f\n", sum);
    printf("Average of non-zero elements: %.2f\n", average);

    // Free allocated memory
    free(arr);
    free(nonZeroArr);

    return 0;
}