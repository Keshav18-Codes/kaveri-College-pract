//5. Compare two files character by character
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char ch1, ch2;
    int position = 0, same = 1;

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        position++;
        if (ch1 != ch2) {
            same = 0;
            break;
        }
    }

    if (same && fgetc(file1) == EOF && fgetc(file2) == EOF) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different at position %d.\n", position);
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
