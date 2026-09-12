#include <stdio.h>


void calculateGCD(int *a, int *b, int *gcd) {
    int tempA = *a;
    int tempB = *b;

    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    *gcd = tempA;
}

int main() {
    int num1, num2, gcd;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    calculateGCD(&num1, &num2, &gcd);

    
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}