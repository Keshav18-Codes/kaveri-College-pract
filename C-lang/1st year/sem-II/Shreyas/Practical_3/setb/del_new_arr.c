#include <stdio.h>

void deleteElement(int *arr, int *n, int element) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (arr[i] == element) {
            // Shift elements to the left
            for (j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--; // Decrease the size of the array
            i--; // Check the same index again
        }
    }
}

int main() {
    int n, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    
    deleteElement(arr, &n, element);
    
    printf("New array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
