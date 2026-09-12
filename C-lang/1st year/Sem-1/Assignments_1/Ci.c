#include<stdio.h>
int main()
{
    float p=20000,r=9.5,n=4,ci;
    ci=p*((1+r/100)*n)-p;
    printf("Compound Interest of given value %f is",ci);
    
}