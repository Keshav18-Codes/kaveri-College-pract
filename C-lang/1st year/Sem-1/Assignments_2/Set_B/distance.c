// Compute distance between X and Y coords.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float a,b,c,d,distance;
    printf("\nEnter the coordinates of point A");
    printf("\n Enter the X Coordinates value:\t");
    scanf("%f",&a);
    printf("\n Enter the Y Coordinates value:\t");
    scanf("%f",&b);
    
    printf("\nEnter the coordinates of point B");
    printf("\nEnter the x coordinates value:\t");
    scanf("%f",&c);
    printf("\nEnter the y coordinates value:\t");
    scanf("%f",&d);

    distance=sqrt((c - a)*(c - a)+(d - b)*(d - b));
            //sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))
    printf("\nDistance beteween Points A and B:%f\n",distance);

    return 0;

}