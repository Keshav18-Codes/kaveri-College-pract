#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
printf("enter the string");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
printf("enter the character to search:");
scanf("%c",&ch);
if(strchr(str,ch))
{
printf("character '%c'is present in the string.\n",ch);
}
else
{
printf("character '%c'is  not present in the string.\n",ch);
}
return 0;
}

