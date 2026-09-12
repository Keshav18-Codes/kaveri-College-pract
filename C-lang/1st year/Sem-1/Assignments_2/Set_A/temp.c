// Find the temperature in celcius and kelvin by accepting values in fahrenheit.
#include<stdio.h>
#include<conio.h>
void main()
{
    float f,c,k;
    
    printf("\n Enter desired value for Fahrenheit:");
    scanf("%f",f);
    
    c=(f-32)*5/9;
    printf("\n Temperature in celsius is: %f",c);
    
    k=c+273.5;
    printf("\n Temperature in kelvin is: %f",k);

    return 0; 
}