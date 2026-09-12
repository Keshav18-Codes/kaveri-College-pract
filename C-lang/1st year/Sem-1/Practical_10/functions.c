#include<stdio.h>
void accept(int [10][10],int,int);
void add(int [10][10],int [10][10],int,int);
void mul(int [10][10],int [10][10],int,int,int);
void display(int [10][10],int,int);
main()
{
int a[10][10],b[10][10];
int r1,c1,r2,c2;
printf("For 1st Matrix\n");
printf("Enter no of rows:");
scanf("%d",&r1);
printf("Enter no of columns:");
scanf("%d",&c1);
printf("For 2nd Matrix\n");
printf("Enter no of rows:");
scanf("%d",&r2);
printf("Enter no of columns:");
scanf("%d",&c2);
printf("Enter elements of 1st matrix");
accept(a,r1,c1);
printf("Enter elements of 2nd matrix");
accept(b,r2,c2);
if((r1==r2)&&(c1==c2))
add(a,b,r1,c1);
else
printf("Addition not possible");
if(c1==r2)
mul(a,b,r1,c1,c2);
else
printf("Multiplication not possible");
}
void accept(int a[10][10],int r,int c)
{int i,j;
for(i=0;i<r;i++)
{

for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void add(int a[10][10],int b[10][10],int r1,int c1)
{
int i,j;
int d[10][10];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
d[i][j]=a[i][j]+b[i][j];
}
}
printf("Addition:\n");
display(d,r1,c1);
}
void mul(int a[10][10],int b[10][10],int r1,int c1,int c2)
{
int i,j,v[10][10],k;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
v[i][j]=0;
for(k=0;k<c1;k++)
{
v[i][j]=v[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("Multiplication:\n");
display(v,r1,c2);
}
void display(int a[10][10],int r,int c)
{int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");

}}