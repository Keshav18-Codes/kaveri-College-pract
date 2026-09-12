#include<stdio.h>
int main(){
                            // to calculate the Circumference and Area of a circle
    
    const double PI = 3.1459;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %lf",circumference);
    printf("\nArea: %lf",area);

    return 0;
}