//3. Program to Compute the Volume of a Sphere using a Macro
#include <stdio.h>

#define PI 3.14159
#define VOLUME_SPHERE(r) ((4.0 / 3.0) * PI * (r) * (r) * (r))

int main() {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("Volume of the sphere is: %.2f\n", VOLUME_SPHERE(radius));
    return 0;
}
