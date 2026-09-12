// Find the Area and Perimeter of a Ring by using its inner and outer radius.
#include<stdio.h>
int main()
{
    const float PI = 3.14; 
    float out_r,in_r,area,peri;
    
    printf("\nEnter the inner radius of the Ring: ");
    scanf("%f",&in_r);
    
    printf("\nEnter the outer radius of the Ring: ");
    scanf("%f",&out_r);
    
    peri = 2*PI*(in_r + out_r);
    area = PI*(in_r*in_r - out_r*out_r);     // If added '#include<math.h>' Then pow function can be used.
    
    printf("The perimeter of the ring is :%f\n",peri);
    printf("The area of the Ring is :%f",area);

    return 0;
}