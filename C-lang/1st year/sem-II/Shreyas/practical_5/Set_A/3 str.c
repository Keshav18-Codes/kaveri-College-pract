#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int digits=0,alphabets=0,specialchars=0;
int i;
printf("enter the string:");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
for(i=0;str[i]!='\0';i++)
{
if(isdigit(str[i]))
{
digit++;
}
else if(isalpha(str[i]))
{
alphabets++;
}
else
{
specialchars++;
}
}
printf("total number of digits:%d\n",digits);
printf("total number of alphabets:%d\n",alphabets);
printf("total number of specialcharacters:%d\n",special characters);
return 0;
}

