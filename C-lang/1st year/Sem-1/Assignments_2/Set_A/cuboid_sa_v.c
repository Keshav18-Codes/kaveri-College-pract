//Finding surface area and volume of a Cuboid by accepting two values
#include<stdio.h>
int main(){
    float l,b,h;
    float sa,vol;

    printf("Enter the values for Length Breadth and Height Respectively:\n");
    scanf("%f%f%f",&l,&b,&h);

    sa = 2 * (l*b + l*h + b*h);
    vol = l*b*h;

    printf("The Surface area %f and Volume %f are the values of a cuboid",sa,vol);

    return 0;
}