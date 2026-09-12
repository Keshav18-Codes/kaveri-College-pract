//2. Copy file contents with reversed case
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    FILE *source = fopen(argv[1], "r");
    FILE *dest = fopen(argv[2], "w");

    if (source == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), dest);
        } else if (isupper(ch)) {
            fputc(tolower(ch), dest);
        } else {
            fputc(ch, dest);
        }
    }

    fclose(source);
    fclose(dest);
    printf("File copied with case reversed.\n");
    return 0;
}