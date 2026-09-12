#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("Menu:\n");
    printf("1. Copy String\n");
    printf("2. Concatenate Strings\n");
    printf("3. Reverse String\n");
    printf("4. Search Character in String\n");
    printf("5. Exit\n");
}

int main() {
    int choice;
    char str1[100], str2[100];

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Call copy function
                copy(str1, str2); // Assuming copy function is defined
                break;
            case 2:
                // Call concatenate function
                concatenate(str1, str2); // Assuming concatenate function is defined
                break;
            case 3:
                // Call reverse function
                reverseString(str1); // Assuming reverseString function is defined
                break;
            case 4:
                // Call search function
                searchCharacter(str1); // Assuming searchCharacter function is defined
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
