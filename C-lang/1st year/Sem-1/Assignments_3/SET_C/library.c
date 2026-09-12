#include<stdio.h>
int main(){
    int days,fine;
    printf("Number of days late:");
    scanf("%d",&days);

    if(days>0)
    {
        if(days<=5)
        fine=5;
        else if(days>5 && days<=10)
        fine=10;
        else if(days>10)
        fine=20+days;
        printf("You have to pay fine Rs=%d",fine);
    }
    else
    {
        printf("Enter Valid Days");
    }

    return 0;
}
