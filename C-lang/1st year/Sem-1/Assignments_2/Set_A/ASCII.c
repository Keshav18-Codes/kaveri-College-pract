// Display the characters ASCII value.
#include<stdio.h>
int main(){

    char ch;
    
    printf("Entered your desired Character:");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d\n",ch,ch);  
// Here '%d' is defined as int so it represents the ASCII value.

    return 0;

}