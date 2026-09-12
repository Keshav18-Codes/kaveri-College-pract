#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int length = strlen(str);
    char temp;
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
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
    str[strcspn(str, "\n")] = 0; // Remove the newline character if present

    do {
        printf("\nMenu:\n");
        printf("1. Reverse the string\n");
        printf("2. Convert to uppercase\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

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