#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    // Accepting input from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any newline character

    // Performing the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;  // Cast to float for decimal division
                printf("%d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}