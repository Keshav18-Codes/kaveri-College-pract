// currency distribution program. 
#include<stdio.h>
int main(){
    
    int w,x,y,z;
    
    printf("Enter withdraw amount :");
    scanf("%d",&w);
    
    x=w/10;//10 rs notes
    w=w%10;
    
    y=w/5;//5 rs notes
    y=y%5;
    
    z=w;//1 rs notes

    printf("notes of 10: %d\n",x);
    printf("notes of 5:%d\n",y);
    printf("notes of 1:%d\n",z);

    return 0;
}