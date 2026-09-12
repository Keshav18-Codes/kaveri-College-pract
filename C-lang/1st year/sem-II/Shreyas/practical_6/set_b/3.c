#include<stdio.h>
int sc(char *str,char ch)
{
int i=0;
while(str[i]!='\0')
{
 if(str[i]==ch)
 {
  return i;
 }
 i++;
}
return-1;
}
int main()
{
char str[100];
char ch;
printf("enter a string:-");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
printf("enter a character to search:-");
scanf("%c",&ch);
int position=sc(str,ch);
if(position==-1)
{
 printf("character not found in the string:\n");
}
else
{
 printf("character'%c' found at position:%d\n",ch,position);
}
return 0;
}

