#include<stdio.h>
int cco(char *str,char ch)
{
int count=0;
while(*str)
{
 if(*str==ch)
 {
  count++;
 }
 str++;
}
return count++;
}
int main()
{
char str[100];
char ch;
printf("enter a string:-");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
printf("enter a character to count:-");
scanf("%c",&ch);
int count=cco(str,ch);
printf("character '%c' occcured %d times.\n",ch,count);
return 0;
}

