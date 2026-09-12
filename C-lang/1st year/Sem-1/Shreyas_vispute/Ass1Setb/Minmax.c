#include<stdio.h>
int main(){
int a[50],i,j,max,min,n;
printf("\nEneter the size of array:");
scanf("%d",&n);
printf("Enter element in array:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
	if(a[i]<min)
	{
		min=a[i];
	}
}
	printf("Largest number:%d",max);
	printf("\nSmallest number:%d",min);
	return 0;
}
