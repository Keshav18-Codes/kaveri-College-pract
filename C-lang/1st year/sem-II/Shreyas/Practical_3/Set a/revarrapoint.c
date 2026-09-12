#include<stdio.h>
void acceptArray(int *arr, int n){
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++){
        scanf("%d", (arr +i));

    }
}

void displayreverse(int *arr, int n) {
    printf("Array in reverse order ");
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", *(arr + i));
        }
        printf("\n");
        }
        int main() {
            int n=5;
            printf("Enter the number of elements in the array: ");
            scanf("%d", &n);

            int arr[n];
            acceptArray(arr, n);
            displayreverse(arr, n);
            return 0;
            
}