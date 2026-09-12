#include<stdio.h>
#include<stdlib.h>

void displayMenu() {
    printf("1. Reverse of string");
    printf("\n2. Convert to uppercase");
    printf("\n3. Convert to lowercase");
    printf("\n4. Exit");
}

void reverseString(char str[]){
    int length = strlen(str);
    int i,j;
    char temp;
    for (i =0, j=length-1;i<j;i++,j--){
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void toUpperCase(char str[]){
    int i;
    for (i = 0;str[i];i++){
        if(str[i]>'a' && str[i]<='z'){
            str[i] = str[i] - 'a' +'A';
        }
    }
}

int main() {
    int choice;
    char str[100];

    while (1)
    {
        displayMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        printf("Enter a string");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]=0;
        reverseString(str);
        printf("Reversed string is: %s\n",str);
        break;
        
        case 2:
        printf("Enter a string: ");
        scanf("%s", str);
        printf("Uppercase string: %s", str);
        break;

        case 3:
        printf("Enter a string: ");
        scanf("%s", str);
        printf("Lowercase string: %s", str);
        break;

        case 4:
        printf("Exiting...");
        exit(0);

        default:
        printf("Invaid choice");
            break;
        }
    }
    
}