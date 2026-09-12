#include<stdio.h>
#include<string.h>
void accept(int a[10],int n)
{
int i;
printf("Enter");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void bubble_sort(int a[10],int n)
{
int i,j;
int temp[10];
for(i=1;i<n;i++)
{
for(j=1;j<n-1;j++)
{
if(strcmp(a[j],a[j+1])>0)
{
strcpy(temp,a[j]);
strcpy(a[j],a[j+1]);
strcpy(a[j+1],temp);
}
}
}
}
void display(int a[10],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
int main()
{
int n;
int a[10];
printf("Enter how many elements you want to enter:");
scanf("%d",&n);
accept(a,n);
bubble_sort(a,n);
display(a,n);
}
