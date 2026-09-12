//write a program to create a structure teacher (tmo,tname,taddress) and structure experience(designation,joining_date) read and display the information of the teacher
#include<stdio.h>

struct teacher
{
    int tno;
    char tname[20];
    char taddress[50];
};

struct experience
{
    char designation[20];
    char joining_date[20];
};

struct teacher t;
struct experience e;
int main()
{
    printf("Enter the teacher number: ");
    scanf("%d",&t.tno);
    printf("Enter the teacher name: ");
    scanf("%s",&t.tname);
    printf("Enter the teacher address: ");
    scanf("%s",&t.taddress);
    printf("Enter the designation: ");
    scanf("%s",&e.designation);
    printf("Enter the joining date: ");
    scanf("%s",&e.joining_date);
    printf("Teacher Information:\n");
    printf("Teacher Number: %d\n",t.tno);
    printf("Teacher Name: %s\n",t.tname);
    printf("Teacher Address: %s\n",t.taddress);
    printf("Designation: %s\n",e.designation);
    printf("Joining Date: %s\n",e.joining_date);
    return 0;
    }
    
    