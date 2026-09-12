#include<stdio.h>
void accept(int a[10],int n)
{
int i;
printf("Enter the elements in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void bubble_sort(int a[10],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
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
int n,a[10];
printf("Enter how many elements you want to enter:");
scanf("%d",&n);
accept(a,n);
bubble_sort(a,n);
display(a,n);
}
