//3. Count words, lines, and characters in a file
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    int words = 0, lines = 0, chars = 0;
    char c, prev = ' ';

    while ((c = fgetc(file)) != EOF) {
        chars++;
        if (c == '\n') {
            lines++;
        }
        if (isspace(c) && !isspace(prev)) {
            words++;
        }
        prev = c;
    }

    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}