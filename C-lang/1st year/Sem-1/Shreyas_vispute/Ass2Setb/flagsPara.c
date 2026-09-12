#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check flags based on the number
void checkFlags(int number, int *flag1, int *flag2, int *flag3) {
    *flag1 = (number % 2 == 0) ? 1 : 0; // Check if even
    *flag2 = is_prime(number); // Check if prime
    *flag3 = (number % 3 == 0 || number % 7 == 0) ? 1 : 0; // Check divisibility by 3 or 7
}

int main() {
    int number;
    int flag1 = 0, flag2 = 0, flag3 = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    checkFlags(number, &flag1, &flag2, &flag3);

    printf("Even flag: %d\n", flag1);
    printf("Prime flag: %d\n", flag2);
    printf("Divisible by 3 or 7 flag: %d\n", flag3);

    return 0;
}
