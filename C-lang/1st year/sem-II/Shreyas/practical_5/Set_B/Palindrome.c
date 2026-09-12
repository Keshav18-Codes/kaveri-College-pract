#include<stdio.h>
#include<string.h>

void reverseSring(char *str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp=str[i];
        str[i] = str[len -1 - i];
        str[len -1 - i] = temp;
    }
}

int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) 
    {   
        if (*str1 != *str2)
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == *str2);
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

    char original[100];
    strcpy(original,str);

    reverseSring(str);

    if(compareStrings(original, str)) {
        printf("The string '%s' is a palindrome\n",original);
    } else {
        printf("The string '%s' is not a palindrome\n",original);
    }
    return 0;
}