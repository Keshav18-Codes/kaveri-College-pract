#include<stdio.h>
#include<string.h>
int main()
{
char source[100],destination[100];
printf("enter the string:");
fgets(source,sizeof(source),stdin);
source[strcspn(source,"\n")]='\0';
strcpy(destination,source);
printf("copied string:%s\n",destination);
printf("length of copied string:%s\n",destination);
return 0;
}
