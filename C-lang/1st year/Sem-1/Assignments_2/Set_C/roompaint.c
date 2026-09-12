// Using dimensions find the area to be painted and whitewashed
#include<stdio.h>
int main(){
    float r_w,r_l,r_h , d_l,d_h , w_l,w_h , p_a , w_a;

    printf("Enter the dimensions of room (Length,Width,Height) in order:\n");
    scanf("%f%f%f",&r_l,&r_w,&r_h);

    printf("Enter the dimensions of Door (Lenght,Height) in order:\n");
    scanf("%f%f",&d_l,&d_h);

    printf("Enter the dimensions of Window (Lenght,Height) in order;\n");
    scanf("%f%f",&w_l,&w_h);

    p_a=(4*r_l*r_h)-(d_l*d_h)-2*(w_l*w_h);
    w_a=r_l*r_w;
    
    printf("Area to be painted:\t%f\n",p_a);
    printf("Area to be White-washed:\t%f\n",w_a);

    return 0;

}