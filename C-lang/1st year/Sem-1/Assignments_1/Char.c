#include<stdio.h>
void main()
{
    char ch;
    printf("Give your desired Alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("Character %c is a vowel",ch);
    }
    else
    {
        printf("Character %c is not a vowel",ch);
    }
}