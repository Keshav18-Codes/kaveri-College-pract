#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int ch;
    char c;
    printf("\n Enter any charachter :");
    scanf("%c",&c);
    printf(" Menu:\n 1. Check uppercase or lowercase\n");
    printf("2.Display its ASCII value\n");
    printf("3.display its next and previous charachter\n4.Exit");
    printf("\n Enter your choice(1-4)");
    scanf("%d",&ch);
    switch(ch){
        case 1: if(isupper(c))
            printf("Uppercase Character");
            else if(islower(c))
            printf("Lowercase Character");
            else 
            printf("Neither lower nor upper");
            break;
        case 2:printf("\n ASCII value of character %c is %d",c,c);
            break;
        case 3:printf("Previous character of %c is %c and next character is %c",c,c-1,c+1);
        case 4: exit(0);
        break;
        default: printf("Invalid input...");    
    }
    return 0;

}