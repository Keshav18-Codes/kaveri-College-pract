//write a program to create structure person(pid,pname,page,salary,pcontactno) reaad and display the details of two persons using typedef
#include<stdio.h>

struct person
{
    int pid;
    char pname[20];
    int page;
    int salary;
    long pcontactno;
};
typedef struct person person;
int main()
{
    person p1,p2;
    printf("Enter the details of person 1:\n");
    printf("Enter the person id:");
    scanf("%d",&p1.pid);
    printf("Enter the person name:");
    scanf("%s",&p1.pname);
    printf("Enter the person age:");
    scanf("%d",&p1.page);
    printf("Enter the person salary:");
    scanf("%d",&p1.salary);
    printf("Enter the person contact number:");
    scanf("%ld",&p1.pcontactno);
    printf("Enter the details of person 2:\n");
    printf("Enter the person id:");
    scanf("%d",&p2.pid);
    printf("Enter the person name:");
    scanf("%s",&p2.pname);
    printf("Enter the person age:");
    scanf("%d",&p2.page);
    printf("Enter the person salary:");
    scanf("%d",&p2.salary);
    printf("Enter the person contact number:");
    scanf("%ld",&p2.pcontactno);
    printf("\nDetails of person 1:\n");
    printf("Person id:%d\n",p1.pid);
    printf("Person name:%s\n",p1.pname);
    printf("Person age:%d\n",p1.page);
    printf("Person salary:%d\n",p1.salary);
    printf("Person contact number:%ld\n",p1.pcontactno);
    printf("\nDetails of person 2:\n");
    printf("Person id:%d\n",p2.pid);
    printf("Person name:%s\n",p2.pname);
    printf("Person age:%d\n",p2.page);
    printf("Person salary:%d\n",p2.salary);
    printf("Person contact number:%ld\n",p2.pcontactno);
    return 0;
    }

 