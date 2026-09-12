#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Array to store the numbers
    int numbers[n];
    
    // Input numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Open the file for writing
    FILE *file = fopen("squares.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Calculate squares and write to the file
    for (i = 0; i < n; i++) {
        int square = numbers[i] * numbers[i];
        fprintf(file, "%d\n", square); // Write the square to the file
    }

    // Close the file
    fclose(file);

    // Display the contents of the file
    printf("\nSquares of the numbers stored in 'squares.txt':\n");
    file = fopen("squares.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display the contents of the file
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}