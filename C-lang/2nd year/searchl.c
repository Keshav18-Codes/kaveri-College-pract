#include<stdio.h>
int main()
{
int a[10],n,i,data,flag=1;
printf("How many element you want to enter:");
scanf("%d",&n);
printf("Enter the elements in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Which statement you want to search");
scanf("%d",&data);
for(i=0;i<n;i++)
{
if(a[i]==data)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("Elemen found");
}
else{
printf("Element not found");
}
}
