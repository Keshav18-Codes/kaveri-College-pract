#include<stdio.h>
#include<string.h>

typedef struct city
{
char name[20];
int pcode;
}city;

void search(city c[20],int n);

void main()
{
FILE *fp;
city c[20];
int i;
fp=fopen("a.text","r");
while(fscanf(fp,"%s%d",c[i].name,&c[i].pcode)!=EOF)
{
i++;
}
search(c,i);
fclose(fp);
}

void search(city c[20],int n)
{
int flag=0;
char str[20];
int i;
printf("Enter City:");
scanf("%s",str);
for(i=0;i<n;i++)
{
if(strcmp(c[i].name,str)==0)
{
flag=1;
break;
}
}
if(flag)
{
printf("City found");
}
else
{
printf("City not found");
}
}
