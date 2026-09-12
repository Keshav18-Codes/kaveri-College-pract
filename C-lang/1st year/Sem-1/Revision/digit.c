#include<stdio.h>
int main(){
    int cdigit;
    printf("Enter a single digit:");
    scanf("%d",&cdigit);
    switch(cdigit){
        case 0:printf("Zero");
        break;
        case 1:printf("One");
        break;
        default : printf("invalid input");

    }
}
