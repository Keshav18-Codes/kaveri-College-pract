#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *words[MAX_WORDS];
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar(); // Consume newline character

    for (int i = 0; i < n; i++) {
        words[i] = (char *)malloc(MAX_LENGTH * sizeof(char));
        printf("Enter word %d: ", i + 1);
        fgets(words[i], MAX_LENGTH, stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // Remove newline character
    }

    qsort(words, n, sizeof(char *), compare);

    printf("\nWords in dictionary order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
        free(words[i]); // Free allocated memory
    }

    return 0;
}

