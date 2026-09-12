#include<stdio.h>
int main()
{
    int a=5,b=78,temp;
    printf("before swaping a=%d, b=%d",a,b);
    temp=a;
    a=b;
    b=a;
    printf("after swaping a=%d, b=%d",a,b);
}