// Check whether the seller has made profit or loss and how much at that...
#include<stdio.h>
int main(){
    float cost,price,m;
    
    printf("Enter cost of Item:\n");
    scanf("%f",&cost);

    printf("enter the selling price of the item:\n");
    scanf("%f",&price);

    m=price - cost;
    if(m>0)
    {
        printf("Profit = %f",m);
    }
    else if(m<0){
        m=(-1)*m;
        printf("Loss = %f",m);
    }
    else
    {
        printf("NO profit NO loss");
    }

    return 0;
}