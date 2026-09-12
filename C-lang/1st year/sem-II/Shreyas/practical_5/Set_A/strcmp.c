#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str[100];
printf("enter the first string:");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]='\0';
printf("enter the second string:");
fgets(str2,sizeof(str2),stdin);
str2[strcspn(str1,"\n")]='\0';
int result=strcmp(str1,str2);
if (result>0)
{
strcat(str1,str2);
printf("concatenated string:%s\n",str1);
}
else if(result<0)
{
strcat(str2,str1);
printf("concatenated string:%s\n",str2);
}
else
{
printf("length of string:%zu\n",strlen(str1));
}
return 0;
}
