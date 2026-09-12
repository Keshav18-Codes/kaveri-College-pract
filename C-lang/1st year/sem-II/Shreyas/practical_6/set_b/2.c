#include<stdio.h>
#include<string.h>
#include<ctype.h>
int cs(char *str1,char *str2)
{
while(*str1 && *str2)
{
 if(*str1 != *str2)
 { 
  return 0;
 }
 str1++;
 str2++;
}
return(*str1==*str2);
}
void rs(char *str)
{
int l=strlen(str);
int i;
for(i=0;i<l/2;i++)
{
 char temp=str[i];
 str[i]=str[l-i-1]=temp;
}
}
int main()
{
char str[100];
printf("enter a string:-");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
char reversed[100];
strcpy(reversed,str);
rs(reversed);
}

