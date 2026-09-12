#include<stdio.h>
int main(){
    int num,revnum=0,rem,original;
    printf("Enter an integer");
    scanf("%d",&num);

    original=num;

    while (num!=0){
        rem=num%10;
        revnum=revnum*10+rem;
        num/=10;
    }

    printf("The reverese of %d is %d",original,revnum);
}