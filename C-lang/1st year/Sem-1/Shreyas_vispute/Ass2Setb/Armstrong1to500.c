#include <stdio.h>
#include <math.h>

void displayArmstrongNumbers() {
    for (int num = 1; num <= 500; num++) {
        int sum = 0, temp = num, digits = 0;

        // Calculate the number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num; // Reset temp to original number

        // Calculate the sum of the digits raised to the power of the number of digits
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == num) {
            printf("%d ", num);
        }
    }
}

int main() {
    displayArmstrongNumbers();
    return 0;
}