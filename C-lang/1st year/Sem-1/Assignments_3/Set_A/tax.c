#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    float salary,tax;
    printf("Enter the Employee basic salary:\n");
    scanf("%f",&salary);

    if(salary<=150000){
        tax=0;
        printf("Tax = %f",tax);
    }
    else if(salary>150000 && salary<=300000){
        tax=(salary*0.2);
        printf("tax = %f",tax);
    }
    else if (salary>300000){
        tax=(salary*0.3);
        printf("Tax = %f",tax);
    }
    else
    {
        printf("Enter valid salary range!!");
    }

}