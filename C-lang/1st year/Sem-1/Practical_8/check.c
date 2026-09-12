#include<stdio.h>

void check(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    printf("\n%c is an Upper case character",ch);

    else if (ch >='a' && ch <= 'z')
    printf("\n%c is an lower case character",ch);

    else 
    printf("\n%c is not an alphabetic character",ch);

}

// Driver code
int main(){
    char ch;

    ch='A';

    check(ch);

    ch='a';

    check(ch);

    ch='0';

    check(ch);

    return 0;
}