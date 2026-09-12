// Find the distance and velocity of given values.
#include<stdio.h>
void main(){
    int sec;
    float distance,initial_velocity,velocity,acceleration; //Can use double for more accuracy %lf
    
    printf("Enter the values of  initial velocity,acceleration and seconds ");
    scanf("%f%f%d",&initial_velocity,&acceleration,&sec);
    
    velocity = (initial_velocity + (acceleration*sec));
    distance = (initial_velocity + (acceleration*(sec * sec))); 
    
    printf("Total velocity is %f\n",velocity);
    printf("Total distance is %f\n",distance);
}