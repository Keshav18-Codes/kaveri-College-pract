#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    int i;
    printf("Enter the number of words: ");
    scanf("%d",&n);

    char **words =(char **)malloc(n * sizeof(char *));

    for (i=0;i<n;i++){
        words[i]=(char *)malloc(100 * sizeof(char));
        printf("Enter word %d:", i + 1);
        scanf("%s",words[i]);
    }
    
    qsort(words,n,sizeof(char *),compareStrings);

    printf("\nWords in dictionary order :\n");
    for ( i = 0; i<n; i++) {
        printf("%s\n", words[i]); 
        free(words[i]);
        }
        free(words);
        return 0;
}