// Find the Surface area and Volume of a cylinder.
#include<stdio.h>
#include<math.h>
int main()
{
    float r,h,pi=3.4;
    float surface_area,volume;
    
    printf("Enter size of radius and height of a cylinder:");
    scanf("%f%f",&r,&h);

    surface_area=2*pi*r*(r+h);
    volume=pi*r*r*h;

    printf("Surface area of cylinder is: %.3f",surface_area);
    printf("Volume of the cylinder is:%.3f",volume);
    
    return 0;
}