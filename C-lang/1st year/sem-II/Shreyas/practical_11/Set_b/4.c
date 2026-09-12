//4. Simple Text Editor Program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    char line[256];

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void modifyLine(const char *filename, int lineNum, const char *newText) {
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    char line[256];
    int count = 1;

    while (fgets(line, sizeof(line), file)) {
        if (count == lineNum) {
            fprintf(temp, "%s\n", newText);
        } else {
            fputs(line, temp);
        }
        count++;
    }

    fclose(file);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);
    printf("Line modified successfully.\n");
}

void addLines(const char *filename, int n) {
    FILE *file = fopen(filename, "a");
    char line[256];

    for (int i = 0; i < n; i++) {
        printf("Enter line %d: ", i + 1);
        getchar();
        fgets(line, sizeof(line), stdin);
        fputs(line, file);
    }

    fclose(file);
}

int main() {
    int choice, lineNum, n;
    char filename[50], newText[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    while (1) {
        printf("\n1. Display File\n2. Modify Line\n3. Add Lines\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayFile(filename);
        } else if (choice == 2) {
            printf("Enter line number to modify: ");
            scanf("%d", &lineNum);
            printf("Enter new text: ");
            getchar();
            fgets(newText, sizeof(newText), stdin);
            modifyLine(filename, lineNum, newText);
        } else if (choice == 3) {
            printf("Enter number of lines to add: ");
            scanf("%d", &n);
            addLines(filename, n);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}