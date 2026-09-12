#include<stdio.h>
                            // Simple Calculator program using switch //
int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("What type of operation would you like to perform (+ - * /) :");
    scanf("%c",&operator);

    printf("\nEnter your First desired number :");
    scanf("%lf",&num1);

    printf("\nEnter your Second desired number :");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nResult: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nResult: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nResult: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nResult: %lf", result);
        break;
    default:
        printf("This value cannot exist! %lf",result);
        break;
    }
    return 0;
}