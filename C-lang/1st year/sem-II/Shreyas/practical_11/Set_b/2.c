//2. File Encryption Program
#include <stdio.h>
#include <stdlib.h>

void encryptFile(const char *filename, int key) {
    FILE *file = fopen(filename, "r");
    FILE *encFile = fopen("encrypted.txt", "w");

    if (!file || !encFile) {
        printf("Error opening file.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(ch + key, encFile);
    }

    fclose(file);
    fclose(encFile);
    printf("File encrypted successfully.\n");
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <encryption_key>\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[2]);
    encryptFile(argv[1], key);

    return 0;
}