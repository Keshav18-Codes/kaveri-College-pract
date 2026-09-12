#include <stdio.h>

// Function to increment the distance by 'd' millimeters
void incrementDistance(int *km, int *cm, int *mm, int d) {
    // Convert the entire distance to millimeters
    int totalMillimeters = (*km * 1000) + (*cm * 10) + *mm;

    // Increment the distance by 'd' millimeters
    totalMillimeters += d;

    // Convert back to kilometers, centimeters, and millimeters
    *km = totalMillimeters / 1000; // Calculate kilometers
    totalMillimeters %= 1000; // Remaining millimeters after extracting kilometers
    *cm = totalMillimeters / 10; // Calculate centimeters
    *mm = totalMillimeters % 10; // Remaining millimeters
}

int main() {
    int km, cm, mm, d;

    // Accept input for distance
    printf("Enter distance (km cm mm): ");
    scanf("%d %d %d", &km, &cm, &mm);

    // Accept the increment in millimeters
    printf("Enter the increment in millimeters: ");
    scanf("%d", &d);

    // Increment the distance
    incrementDistance(&km, &cm, &mm, d);

    // Display the new distance
    printf("New distance: %d km, %d cm, %d mm\n", km, cm, mm);

    return 0;
}