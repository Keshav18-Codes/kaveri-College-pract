#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;

    // Iterate through the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    // Accept input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    int length = stringLength(str);

    // Display the result
    printf("The length of the string is: %d\n", length);

    return 0;
}