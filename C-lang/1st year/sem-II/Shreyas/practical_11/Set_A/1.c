//1. Count occurrences of a character in a file
#include <stdio.h>

int main() {
    char filename[100], ch, c;
    int count = 0;
    
    printf("Enter the filename: ");
    scanf("%s", filename);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (c == ch) {
            count++;
        }
    }

    fclose(file);
    printf("The character '%c' occurred %d times in the file.\n", ch, count);
    return 0;
}