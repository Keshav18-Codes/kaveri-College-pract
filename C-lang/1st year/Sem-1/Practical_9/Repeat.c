#include <stdio.h>

int main() {
    int N, num, count[26] = {0};

    printf("Enter the number of inputs (N): ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Enter number %d (1-25): ", i + 1);
        scanf("%d", &num);

        if (1 <= num && num <= 25) {
            count[num]++;
        } else {
            printf("Invalid input. Please enter a number between 1 and 25.\n");
        }
    }

    printf("Frequency of each number:\n");
    for (int i = 1; i <= 25; i++) {
        if (count[i] > 0) {
            printf("%d: %d\n", i, count[i]);
        }
    }

    return 0;
}