//write a program to create a structure hospital use the typedef to display the details
#include<stdio.h>

struct hospital
{
    int id;
    char name[20];
    char address[20];
    int beds;
};
typedef struct hospital HOSPITAL;
int main()
{
    HOSPITAL h1;
    printf("Enter the hospital id: ");
    scanf("%d",&h1.id);
    printf("Enter the hospital name: ");
    scanf("%s",&h1.name);
    printf("Enter the hospital address: ");
    scanf("%s",&h1.address);
    printf("Enter the number of beds: ");
    scanf("%d",&h1.beds);
    printf("Hospital id: %d\n",h1.id);
    printf("Hospital name: %s\n",h1.name);
    printf("Hospital address: %s\n",h1.address);
    printf("Number of beds: %d\n",h1.beds);
    return 0;
    }

