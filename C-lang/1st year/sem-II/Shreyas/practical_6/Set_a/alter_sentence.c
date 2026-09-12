#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alterSentence(char *sentence) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            sentence[i] = '*'; // Replace space with '*'
        } else if (isdigit(sentence[i])) {
            sentence[i] = '?'; // Replace digit with '?'
        } else if (isalpha(sentence[i])) {
            if (islower(sentence[i])) {
                sentence[i] = toupper(sentence[i]); // Convert to uppercase
            } else {
                sentence[i] = tolower(sentence[i]); // Convert to lowercase
            }
        }
    }
}

int main() {
    char sentence[256];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character

    alterSentence(sentence);
    printf("Altered sentence: %s\n", sentence);
    return 0;
}
