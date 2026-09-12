//Write a program to accept radius and display area and perimeter using pointers.
#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area,perimeter;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("Area of circle is:%f",area);
    printf("Perimeter of circle is:%f",perimeter);
    }

    



