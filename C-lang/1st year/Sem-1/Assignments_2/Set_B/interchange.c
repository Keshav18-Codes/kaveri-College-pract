// Swap the places of given two numbers with each other
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping A=%d and B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf(" After swapping A=%d and B=%d",a,b);

    return 0;
}
