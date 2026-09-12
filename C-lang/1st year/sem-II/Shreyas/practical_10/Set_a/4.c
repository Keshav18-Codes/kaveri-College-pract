//4. Power Calculation
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <base> <exponent>\n", argv[0]);
        return 1;
    }

    int base = atoi(argv[1]);
    int exponent = atoi(argv[2]);
    int result = pow(base, exponent);

    printf("Result: %d\n", result);
    return 0;
}