//2. Find Minimum, Maximum, and Average of Three Integers
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error: Enter exactly three integers.\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    float avg = (num1 + num2 + num3) / 3.0;

    printf("Minimum: %d\nMaximum: %d\nAverage: %.2f\n", min, max, avg);

    return 0;
}