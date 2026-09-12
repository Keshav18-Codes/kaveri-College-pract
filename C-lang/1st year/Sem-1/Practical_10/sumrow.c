#include<stdio.h>
int main()
{
    int mat[10][10],m,n;
    void display(int a[10][10],int m,int n);
    void accept(int a[10][10],int m,int n);
    void sumofrows(int a[10][10],int m,int n);
    printf("How many rows and columns?");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements :");
    accept(mat,m,n);
    printf("\nThe matrix is:\n");
    display(mat,m,n);
    sumofrows(mat,m,n);
}
void accept(int a[10][10],int m,int n)
{
    int i,j;
    for (i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    }
}
void display(int a[10][10],int m,int n)
{
    int i,j;
    printf("\nThe element of %d by %d by matrix are\n",m,n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        printf("%d\t",a[i][j]);
    }
}
void sumofrows(int a[10][10], int m, int n)
{
int i,j, sum;
for (i=0; i<m; i++) /* outer loop for rows */
{ 
    sum=0;
for (j=0;j<n; j++) /* inner loop for columns */
sum= sum+a[i][j];
printf("Sum of elements of row %d = %d", i, sum);
}
}