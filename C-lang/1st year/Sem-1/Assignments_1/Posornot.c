#include<stdio.h>
void main()
{
    int num;
    printf("Input number");
    scanf("%d, &num");
    if(num >= 0)
         printf("%d is postive \n",num);
    else
    printf("%d is a negative number \n",num);
}