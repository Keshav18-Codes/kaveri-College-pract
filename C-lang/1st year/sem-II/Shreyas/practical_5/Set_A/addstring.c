//wrtie a program to read a string and copy it to another string and display copied string also the length of copied string (use buuilt in functions)
#include<stdio.h>
#include<string.h>

int main(){
    char source[100],destination[100];
    printf("Enter a string : ");
    fgets(source,sizeof(source),stdin);
    source[strcspn(source,"\n")]='\0';
    strcpy(destination,source);
    printf("Copied string : %s\n",destination);
    printf("Length of copied string : %lu\n", strlen(destination));
    return 0;
}
