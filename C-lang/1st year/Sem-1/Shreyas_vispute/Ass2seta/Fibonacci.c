#include<stdio.h>

void fibonacci(int *limit){
    int a = 0,b = 1, next;

    printf("Fibonacci Series up to %d:\n",*limit);
    printf("%d %d",a,b);

    next = a+b;
    while (next <= *limit){
        printf("%d",next);
        a=b;
        b=next;
        next = a+b;
    }
    printf("\n");
}

int main(){
    int limit ;
    printf("Enter the limit for fibonacci series:");
    scanf("%d",&limit);
    fibonacci(&limit);

    return 0;
}