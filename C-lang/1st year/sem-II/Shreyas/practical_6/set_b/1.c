#include<stdio.h>
#include<string.h>
char *substring(char *str,int start,int end)
{
static char sub[100];
int i,j=0;
for(i=start;i<=end;i++)
{
 sub[j++]=str[i];
}
sub[j]='\0';
return sub;
}
int main()
{
char str[]="hello,world!";
int start=7,end=11;
printf("substring:%s\n",substring(str,start,end));
return 0;
}

