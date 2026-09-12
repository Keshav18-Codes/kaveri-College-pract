#include<stdio.h>

int main(){
    int i,j,isprime;
    for (i=2; i<=500; i++){
        isprime = 1;
        for (j=2; j<=i/2; j++){
            if (i%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
        printf("%d\t",i);
        }
    }
    return 0;
}