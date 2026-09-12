#include <stdio.h>
#include <string.h>

#define MAX_COUNTRIES 10

int main() {
    const char *countries[MAX_COUNTRIES] = {
        "India", "France", "Germany", "USA", "Japan",
        "Australia", "Canada", "Brazil", "Russia", "China"
    };

    const char *capitals[MAX_COUNTRIES] = {
        "New Delhi", "Paris", "Berlin", "Washington, D.C.", "Tokyo",
        "Canberra", "Ottawa", "Brasília", "Moscow", "Beijing"
    };

    char input[100];
    printf("Enter a country name: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    for (int i = 0; i < MAX_COUNTRIES; i++) {
        if (strcasecmp(input, countries[i]) == 0) {
            printf("The capital of %s is %s.\n", countries[i], capitals[i]);
            return 0;
        }
    }

    printf("Country not found.\n");
    return 0;
}
