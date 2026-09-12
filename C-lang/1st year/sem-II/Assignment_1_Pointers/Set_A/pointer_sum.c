//write a program to sum of first 'n' numbers using pointers.
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *ptr = &n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        }
        printf("Sum of first %d numbers = %d", n, sum);
        return 0;
    }   
    