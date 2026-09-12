//1. Program to Accept a Number and Define a Macro for Cube Calculation
#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Cube of %d is %d\n", num, CUBE(num));
    return 0;
}