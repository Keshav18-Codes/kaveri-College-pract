// Give the time in hh mm ss format.
#include<stdio.h>
int main(){
    int h , m , s;
    printf("Enter time in format hh mm ss:\n");
    scanf("%d%d%d",&h,&m,&s);

    if((h>=0 && h<=24) && (m>=0 && m<=60) && (s>=0 && s<=60))
    {
        printf("valid\n");
    }
    else
    {
        printf("invalid\n");
    }
    return 0;
}