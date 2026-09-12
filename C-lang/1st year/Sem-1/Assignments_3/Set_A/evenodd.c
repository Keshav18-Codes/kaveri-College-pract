// Program to check whether the Given number is odd or even

#include<stdio.h>
int main(){
    int n;
    printf("Enter an Integer :\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The given number is an even number:%d",n);
    }
    else 
    {
        printf("The given number is an odd number:%d",n);
    }

    return 0;
}