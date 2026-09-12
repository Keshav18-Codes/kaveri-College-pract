#include <stdio.h>
#include <string.h>
void reverseString(char str[])
{
int length = strlen(str);
int i, j;
char temp;
for (i = 0, j = length - 1; i < j; i++, j--) 
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
void toUpperCase(char str[],int i) 
{
for (int i = 0; str[i]; i++) 
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
}
void toLowerCase(char str[],int i)
{
for (int i = 0; str[i]; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] - 'A' + 'a';
}
}
}

int main() 
{
int choice;
char str[100];
while (1) 
{
printf("\nMenu:\n");
printf("1. Reverse of string\n");
printf("2. Convert to uppercase\n");
printf("3. Convert to lowercase\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
getchar();
switch (choice) 
{
case 1:
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = 0; // Remove the newline character
reverseString(str);
printf("Reversed string: %s\n", str);
break;
case 2:
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = 0; // Remove the newline character
toUpperCase(str);
printf("Uppercase string: %s\n", str);
break;
case 3:
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = 0; // Remove the newline character
toLowerCase(str);
printf("Lowercase string: %s\n", str);
break;
case 4:
printf("Exiting the program.\n");
return 0;
default:
printf("Invalid choice, please try again.\n");
}
}
return 0;
}

