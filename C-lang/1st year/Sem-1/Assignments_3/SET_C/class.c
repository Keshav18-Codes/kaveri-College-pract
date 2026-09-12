#include<stdio.h>
void main(){
    int m1,m2,m3,total;
    float per;

    printf("Enter 3 subject marks:\n");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total*100/300;
    
    printf("Total=%d",total);
    printf("\n Per=%.2f",per);

    if(per>=60 && per<=100){
        printf("\n You are in Distinction");
    }
    else if(per>=50 && per<=60){
        printf("\n You are in 1st class");
    }
    else if(per>=40 && per<=50){
        printf("\n You are in 2nd calss");
    }
    else{
        printf("\n You are FAIL!!");
    }
} 