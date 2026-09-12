#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%5==0 && a%7!=0)
    printf("%d is divisible by 5 and not 7",a);
    else if (a%5!=0 && a%7==0)
    printf("%d is divisible by 7 and not 5",a);
    else if (a%5==0 && a%7==0)
    printf("%d is divisible by 5 and 7",a);
    else if(a%5!=0 && a%7!=0)
    printf("%d is divisible neither 5 nor 7",a);

    return 0;
}