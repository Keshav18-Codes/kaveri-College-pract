// Find the quadrant in which the coords lie...
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the values for X and Y:\n");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    printf("Point (%d,%d) lies in first quadrant\n",x,y);
    
    else if(x<0 && y>0)
    printf("Point (%d,%d) lies in second quadrant\n",x,y);
    
    else if(x<0 && y<0)
    printf("Point (%d,%d) lies in third quadrant\n",x,y);
    
    else if(x>0 && y<0) 
    printf("Point (%d,%d) lies in fourth quadrant\n",x,y);
    
    else if(x==0 && y==0)
    printf("Point (%d,%d) lies at the origin\n",x,y);

}