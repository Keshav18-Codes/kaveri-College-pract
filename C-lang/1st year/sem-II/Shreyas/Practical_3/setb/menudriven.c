#include <stdio.h>

void displayTrace(int *matrix, int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += *(matrix + i * n + i); // Accessing diagonal elements
    }
    printf("Trace of the matrix: %d\n", trace);
}

int isUpperTriangular(int *matrix, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (*(matrix + i * n + j) != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Is upper triangular
}

int isLowerTriangular(int *matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(matrix + i * n + j) != 0) {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // Is lower triangular
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display the trace of the matrix\n");
        printf("2. Check if the matrix is an upper triangular matrix\n");
        printf("3. Check if the matrix is a lower triangular matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayTrace((int *)matrix, n);
                break;
            case 2:
                if (isUpperTriangular((int *)matrix, n)) {
                    printf("The matrix is an upper triangular matrix.\n");
                } else {
                    printf("The matrix is not an upper triangular matrix.\n");
                }
                break;
            case 3:
                if (isLowerTriangular((int *)matrix, n)) {
                    printf("The matrix is a lower triangular matrix.\n");
                } else {
                    printf("The matrix is not a lower triangular matrix.\n");
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
