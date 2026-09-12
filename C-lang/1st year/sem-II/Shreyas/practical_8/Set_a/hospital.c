//write a program to create a structure hospital  to display 'n' records the details use seperate function for the same
#include<stdio.h> 

struct hospital
{
    int id;
    char name[50];
    char address[100];
};
void display(int n,struct hospital h[])
{
    for(int i=0;i<n;i++)
    {
        printf("\nHospital ID : %d",h[i].id);
        printf("\nHospital Name : %s",h[i].name);
        printf("\nHospital Address : %s",h[i].address);
        }
        }
        int main()
        {
            struct hospital h[10];
            int n=5;
            printf("\nHospital Details : \n");
            printf("Hospital ID\tHospital Name\tHospital Address\n");
            for(int i=0;i<n;i++)
            {
                printf("\nEnter Hospital ID : ");
                scanf("%d",&h[i].id);
                printf("\nEnter Hospital Name : ");
                scanf("%s",&h[i].name);
                printf("\nEnter Hospital Address : ");
                scanf("%s",&h[i].address);
                }
                display(n,h);
                return 0;
            }
                        


