#include <stdio.h>

// Function to increment distance by d millimeters
void increment_distance(int kilometers, int centimeters, int millimeters, int d, int *new_km, int *new_cm, int *new_mm) {
    // Convert total distance to millimeters
    int total_mm = (kilometers * 1000) + (centimeters * 10) + millimeters + d;

    // Convert back to kilometers, centimeters, and millimeters
    *new_km = total_mm / 1000;
    total_mm %= 1000;
    *new_cm = total_mm / 10;
    *new_mm = total_mm % 10;
}

int main() {
    int kilometers, centimeters, millimeters, d;
    int new_km, new_cm, new_mm;

    // Accept user input
    printf("Enter distance (km cm mm): ");
    scanf("%d %d %d", &kilometers, &centimeters, &millimeters);
    printf("Enter increment in millimeters: ");
    scanf("%d", &d);

    // Increment the distance
    increment_distance(kilometers, centimeters, millimeters, d, &new_km, &new_cm, &new_mm);

    // Display the new distance
    printf("New distance: %d km, %d cm, %d mm\n", new_km, new_cm, new_mm);

    return 0;
}
