// Code to check at what day Your "Shrada" are...
#include<stdio.h>
void main()
{
    int n;
    printf("Program to check what day is your 'shradda' select one of the following conditions:");
    printf("\n1.Family member dead but its less than a year\n2.Family member dead where HE/SHE was not married\n3.Family member dead where it is a married lady and her husband is still alive\n4.Family member dead where the person went to 'Kashi'\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("You are suppossed to do shradda on Chaturthi that is according to lunar calendar on fourth day");
        break;
    case 2:
        printf("You are suppossed to do shradda on Panchami that is according to lunar calendar on Fifth day");
        break;
    case 3:
        printf("You are suppossed to do shradda on Navmi that is according to lunar calendar on Ninth day");
        break;
    case 4:
        printf("You are suppossed to do shradda on Terava that is according to lunar calendar on Thirteenth day");
        break;
    
    default:
        break;
    }
    
}