#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Accept input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Accept character to search
    printf("Enter a character to search: ");
    scanf(" %c", &ch); // The space before %c is to consume any leftover newline character

    // Count occurrences of the character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display the result
    printf("The character '%c' occurs %d time(s) in the string.\n", ch, count);

    return 0;
}