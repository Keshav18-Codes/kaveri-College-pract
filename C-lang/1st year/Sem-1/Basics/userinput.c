#include<stdio.h>
#include<string.h>
int main()
{
    char name[25]; //bytes
    int age;
    
    printf("Whats your name:");
    //scanf("%s",&name);             // This cannot read white spaces.   
    fgets(name, 25, stdin);          // use when white spaces are needed | Theres no need for '&' | {stdin (standard input)}. 
    name[strlen(name)-1] = '\0';

    printf("How old are you:");
    scanf("%d",&age);

    printf("\nHello %s, how are you?",name);
    printf("\nYou are %d years old.",age);

    return 0;
}