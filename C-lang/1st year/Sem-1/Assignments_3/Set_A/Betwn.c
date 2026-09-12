// Accept three numbers to show which no. is betwn the three
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y && x<=z){
        printf("%d is between %d and %d",x,y,z);
    }
    else{
        printf("%d is not between %d and %d",x,y,z);
    }

    return 0;
}