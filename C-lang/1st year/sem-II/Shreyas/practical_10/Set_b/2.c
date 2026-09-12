//2. Replace 't' with '*' in a Given String
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s \"string\"\n", argv[0]);
        return 1;
    }

    char str[100];
    strcpy(str, argv[1]);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 't' || str[i] == 'T') {
            str[i] = '*';
        }
    }

    printf("Modified String: %s\n", str);
    return 0;
}