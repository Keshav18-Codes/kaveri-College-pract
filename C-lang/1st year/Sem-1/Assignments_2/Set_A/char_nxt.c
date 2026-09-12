// Show the next character and previous character of the entered character.
#include<stdio.h>
int main(){

    char ch;
    
    printf("Enter A desired Character:\t");
    scanf("%c",&ch);
    
    printf("You Entered:%c\n",ch);
    printf("Previous Character:%c\n",ch-1);
    printf("Next character:%c\n",ch+1);

    return 0;
}