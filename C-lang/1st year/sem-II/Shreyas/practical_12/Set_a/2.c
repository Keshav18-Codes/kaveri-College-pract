//2. Program to Define Value of PI and Calculate Perimeter of a Circle
#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    perimeter = 2 * PI * radius;
    printf("Perimeter of the circle is: %.2f\n", perimeter);
    return 0;
}