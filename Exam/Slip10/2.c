#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* convertCase(const char* str) {
    // Calculate the length of the input string
    int length = strlen(str);
    
    // Allocate memory for the new string (uppercase + lowercase + null terminator)
    char* result = (char*)malloc((2 * length + 3) * sizeof(char)); // 2 * length + 3 for "Uppercase: " + "Lowercase: " + null terminator
    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Create uppercase and lowercase versions
    char* upper = result;
    char* lower = result + length + 12; // Offset for "Uppercase: " (11 chars) and null terminator

    // Fill the uppercase version
    strcpy(upper, "Uppercase: ");
    for (int i = 0; i < length; i++) {
        upper[i + 11] = toupper(str[i]);
    }
    upper[length + 11] = '\0'; // Null-terminate the uppercase string

    // Fill the lowercase version
    strcpy(lower, "Lowercase: ");
    for (int i = 0; i < length; i++) {
        lower[i + 12] = tolower(str[i]);
    }
    lower[length + 12] = '\0'; // Null-terminate the lowercase string

    return result;
}

int main() {
    char str[100];

    // Accept input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    // Convert case
    char* result = convertCase(str);
    if (result != NULL) {
        // Display the result
        printf("%s\n", result);
        printf("%s\n", result + strlen(result) + 1); // Print the lowercase version
        free(result); // Free allocated memory
    }

    return 0;
}