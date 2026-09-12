#include <stdio.h>
#include <string.h>

void copy(char *src, char *dest) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void concatenate(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    if (strcmp(str1, str2) > 0) {
        concatenate(str1, str2);
        printf("Concatenated string: %s\n", str1);
    } else {
        printf("Length of first string: %lu\n", strlen(str1));
    }

    return 0;
}
