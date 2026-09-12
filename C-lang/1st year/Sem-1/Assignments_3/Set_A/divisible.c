//Chech whether the value is divisible by 5 'AND' 7
#include<stdio.h>
void main(){
    int n,f,m;
    printf("Enter a Desired number:\n");
    scanf("%d",&n);
    if (n%5==0) 
    {
        f=1;
    }
    if (n%7==0)
    {
        m=1;
    }
    if (f==1 && m==1)
    {
        printf("The Entered Number %d is divisble by 5 and 7",n);
    }
    else if(f==1)
    {
        printf("Entered number %d is divisble by 5 but not 7",n);
    }
    else if(m==1)
    {
        printf("Entered number %d is divisible by 7 but not 5",n);
    }
    else
    {
        printf("Entered number %d is neither divisible by 5 nor 7",n);
    }


}