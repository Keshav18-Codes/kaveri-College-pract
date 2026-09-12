#include<stdio.h>
int main(){
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    if (a>=18)
    printf("Valid age to vote");
    else if(a<18)
    printf("Invalid age to vote");
    return 0;
}