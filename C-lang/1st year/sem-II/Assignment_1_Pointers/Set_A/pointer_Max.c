//Write a program to find maximum from two integers using pointers.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int fno,sno,*ptrl=&fno,*ptr2=&sno;

    printf("\n\n Pointer : Find the maximum number between two numbers:\n");
    printf("------------------------------------------------------------------\n");

    printf("Input the first number:");
    scanf("%d",ptrl);
    printf("Input the second number:");
    scanf("%d",ptr2);

    if (*ptrl>*ptr2) {
        printf("\n\n %d is the maximum number.\n\n",*ptrl);
    }
    else{
        printf("\n\n %d is the maximum number.\n\n",*ptr2);
    }
    return 0;
}