/*Write a program to create a structure named company which has name, address, phone
and noOfEmployee as member variables. Read name of company, its address, phone and
noOfEmployee. Finally display these members‟ value.*/
#include <stdio.h>

struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company comp;

    // Accept company details
    printf("Enter Company Name: ");
    scanf(" %[^\n]%*c", comp.name);
    printf("Enter Company Address: ");
    scanf(" %[^\n]%*c", comp.address);
    printf("Enter Company Phone: ");
    scanf(" %[^\n]%*c", comp.phone);
    printf("Enter Number of Employees: ");
    scanf("%d", &comp.noOfEmployee);

    // Display company details
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}