#include<stdio.h>

void toUppercase(char *str) {
    while (*str)
    {
        if(*str >= 'a' && *str <='z') {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

    toUppercase(str);
    printf("Uppercase string is: %s\n",str);

    return 0;
}