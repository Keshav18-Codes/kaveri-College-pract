#include<stdio.h>

void sumOfArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    printf("Sum of array elements: %d\n", sum);
}

void printEvenPositionElements(int *arr, int n) {
    int sum = 0;
    printf("Elements at even positions: ");
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of elements at even positions: %d\n", sum);
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
    sumOfArray(arr, n);
    printEvenPositionElements(arr, n);
    return 0;
}
