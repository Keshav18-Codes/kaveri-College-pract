//3. Recursive Sum of n Numbers
#include <stdio.h>
#include <stdlib.h>

int recursiveSum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    int numbers[argc - 1];
    for (int i = 1; i < argc; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    int sum = recursiveSum(numbers, argc - 1);
    printf("Sum: %d\n", sum);

    return 0;
}