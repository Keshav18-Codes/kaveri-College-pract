//3. Sum of n Integers
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: Enter at least one integer.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("Sum: %d\n", sum);
    return 0;
}