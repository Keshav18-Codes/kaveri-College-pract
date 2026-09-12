//Write a program to accept an integer using pointer and check whether it is even or odd.
#include<stdio.h>

void checkEvenOdd(int *num) {
    if (*num%2==0){
        printf("%d is even.\n",*num);
    }
    else {
        printf("%d is odd.\n",*num);
    }
}
int main() {
    int number;
    int *ptr = &number;

    printf("Enter an integer:");
    scanf("%d",ptr);

    checkEvenOdd(ptr);

    return 0;
}