// Check whether the given value is a digit or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("%c is a Digit \n",ch);
    }
    else{
        printf("%c is not a Digit\n",ch);
    }

    return 0;
}