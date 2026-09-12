//Count Total Number of Words in a Sentence
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s \"sentence\"\n", argv[0]);
        return 1;
    }

    int count = 0;
    for (int i = 1; i < argc; i++) {
        count++;
    }

    printf("Total number of words: %d\n", count);
    return 0;
}