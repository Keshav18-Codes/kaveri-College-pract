//3. File Operations Program
#include <stdio.h>
#include <stdlib.h>

void concatenateFiles(const char *file1, const char *file2, const char *output) {
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *out = fopen(output, "w");

    if (!f1 || !f2 || !out) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(f1)) != EOF) fputc(ch, out);
    while ((ch = fgetc(f2)) != EOF) fputc(ch, out);

    fclose(f1);
    fclose(f2);
    fclose(out);
    printf("Files concatenated into %s\n", output);
}

void mergeFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    char line1[256], line2[256];

    if (!f1 || !f2) {
        printf("Error opening files.\n");
        return;
    }

    while (fgets(line1, sizeof(line1), f1) && fgets(line2, sizeof(line2), f2)) {
        printf("%s%s", line1, line2);
    }

    fclose(f1);
    fclose(f2);
}

int main() {
    int choice;
    char file1[50], file2[50], output[50];

    while (1) {
        printf("\n1. Concatenate\n2. Merge\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter file1, file2, and output filename: ");
            scanf("%s %s %s", file1, file2, output);
            concatenateFiles(file1, file2, output);
        } else if (choice == 2) {
            printf("Enter file1 and file2: ");
            scanf("%s %s", file1, file2);
            mergeFiles(file1, file2);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}