#include<stdio.h>

void rangeOfArray(int *arr , int n) {
    int min =*arr, max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
            }
            if (*(arr + i) > max) {
                max = *(arr + i);
                }
                }
                printf("Range of array is %d to %d\n", min, max);
                }
                int main() {
                    int n;
                    printf("Enter the number of elements in the array: ");
                    scanf("%d", &n);
                    int arr[n];
                    printf("Enter the elements of the array: ");
                    for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                        }
                        rangeOfArray(arr, n);
                        return 0;
                    }


               
                
                 /* int min = *arr , max = *arr,i;
                    for ( i = 1 ; i < n ; i++) {
                        if (arr[i] < min) {
                            min = arr[i];
                            }
                            if (*(arr + i ) > max) {
                                max = *(arr + i);
                                }
                                }
                                printf("%d %d\n" , min , max);
                                }
                                int main() {
                                    int n ;
                                    printf("Enter the number of elements :");
                                    scanf("%d", &n);
                
                                    int arr[n],i;
                                    printf("Enter The elements :\n");
                                    for (i = 0; i<n ;i++);
                                    scanf("%d",&arr[i]);
                                    rangeOfArray(arr , n);
                                    return 0;
                */
               