//5. Concatenate Two Strings
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    char result[200];
    strcpy(result, argv[1]);
    strcat(result, argv[2]);

    printf("Concatenated String: %s\n", result);
    return 0;
}