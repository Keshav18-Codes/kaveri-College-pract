#include<stdio.h>
int main()
{
    // format specifier % = defines and formats a type of data to be displayed //

    // %c = character 
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision 
    // %1 = minimum field width
    // %- = left align

    float a = 1.2;
    float b = 20.00;
    float c = 200.88;

    printf("a : $%.1f\n",a);
    printf("b : $%.4f\n",b);
    printf("c : $%8.2f\n",c);
    return 0;

}