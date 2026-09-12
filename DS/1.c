#include<stdio.h>

int main()
{
    int i,j,a[20],n,temp;

    printf("How many element you want to search\n");
    scanf("%d",&n);

    printf("Enter the unsorted element\n");
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

    printf("Display the unsorted element\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nDisplay sorted element\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
