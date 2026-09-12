// Find out the final salary of an employee...

#include<stdio.h>
#include<math.h>
int main(){
    int id;
    float m,bsalary,da,tax,house_rent;
    
    printf("Employee ID:\n");
    scanf("%d",&id);

    printf("Enter the Basic salary:\n");
    scanf("%f",&bsalary);

    house_rent=(bsalary*0.1); //Rent to be given
    da=(bsalary*0.3); //Given to Emp
    tax=(bsalary*0.05); //Deducted
    m=bsalary+((house_rent+da)-tax); // Paid salary
    printf("ID:%d \n salary:%1f",id,m);

    return 0;
}