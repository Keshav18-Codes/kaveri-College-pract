#include<stdio.h>

void reverseNumber(int *num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    reverseNumber(&number);
    return 0;
}

void reverseNumber(int *num) {
    int reversed = 0;
    int original = *num;

    while (original != 0) {
        int digit = original % 10;
        reversed = reversed * 10 + digit;
        original /= 10;
    }

    printf("Reversed Number: %d\n", reversed);
}
