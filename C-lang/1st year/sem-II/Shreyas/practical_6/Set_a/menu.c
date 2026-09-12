#include <stdio.h>
#include <stdlib.h>
#include "addstring.h"
#include "Menu_copy.h"
#include "Menu_rev_con.h"
#include "searchchar.h"

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
        getchar(); // To consume the newline character

        switch (choice) {
            case 1:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                char dest[100];
                copy(str1, dest);
                printf("Copied string: %s\n", dest);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
                concatenate(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 3:
                printf("Enter string to reverse: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 4:
                printf("Enter string to search: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                char ch;
                printf("Enter character to search: ");
                scanf("%c", &ch);
                int position = searchCharacter(str1, ch);
                if (position != -1) {
                    printf("Character '%c' found at position %d\n", ch, position);
                } else {
                    printf("Character '%c' not found in the string.\n", ch);
                }
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
