#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void convertToUppercase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    do {
        printf("\nMenu:\n");
        printf("1. Reverse the string\n");
        printf("2. Convert to uppercase\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
            case 2:
                convertToUppercase(str);
                printf("Uppercase string: %s\n", str);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
