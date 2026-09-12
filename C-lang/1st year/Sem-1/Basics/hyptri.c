#include<stdio.h>
#include<math.h>
int main(){
    double A;
    double B;
    double C;

    printf("Give the value of two sides i.e,.A and B:");
    scanf("%lf%lf",&A,&B);

    //C=sqrt(pow(A,2)+pow(B,2)); or :
    C = sqrt(A*A + B*B);

    printf("The Hypotenuse ie. side c of the given triange is :%lf",C);

    return 0;
}