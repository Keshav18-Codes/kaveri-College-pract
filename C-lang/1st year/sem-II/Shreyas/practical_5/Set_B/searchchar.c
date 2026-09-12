#include<stdio.h>

int searchCharacter(char *str, char ch) {
    int pos = 0;
    while (*str)
    {
        if (*str == ch) {
            return pos;
        }
        str++;
        pos++;
    }
    return -1;
}

int main() {
    char str[100],ch;
    printf("Enter a string:");
    scanf("%s",&str);

    printf("Enter the character to search: ");
    scanf("%c", &ch);

    int position = searchCharacter(str,ch);

    if (position != -1)
    {
        printf("Character '%c' found at position %d\n",ch,position);
    } else {
        printf("Character '%c' not found in the string.\n",ch);
    }
    
    return 0;
}