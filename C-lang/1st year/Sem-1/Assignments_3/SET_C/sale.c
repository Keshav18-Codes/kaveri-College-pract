#include<stdio.h>
#include<math.h>
int main(){
    int total,q1,q2,q3,p1,p2,p3,discount,t1,t2,t3;
    
    printf("Enter Keyboard Quantity:");
    scanf("%d",&q1);
    printf("\nEnter the Keyboard price:");
    scanf("%d",&p1);
    t1=q1*p1;

    printf("\nEnter the Mouse Quantity:");
    scanf("%d",&q2);
    printf("\nEnter the Mouse price:");
    scanf("%d",&p2);
    t2=q2*p2;

    printf("\nEnter the Gamepad Quantity:");
    scanf("%d",&q3);
    printf("\nEnter the Gamepad Price:");
    scanf("%d",&p3);
    t3=q3*p3;

    total=t1+t2+t3;
    printf("Total = %d",total);
    if(total>=7000){
        discount=(total*0.2);
        total=total-discount;
    }
    else if(total<=7000 && total>5000){
        discount=(total*0.15);
        total=total-discount;
    }
    else if(total<=5000){
        discount=(total*0.08);
        total=total-discount;
    }
    printf("\nDiscount=%d",discount);
    printf("\nTotal Expense in Rs=%d",total);

    return 0;
}