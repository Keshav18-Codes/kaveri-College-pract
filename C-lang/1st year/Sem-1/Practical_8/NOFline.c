#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char previousletter;
    char line[500];
    int numberOFWords, numberOFLines, length, i;
    printf("Enter The string:");
    scanf("%d",i);
    while (fgets (line,500,stdin) !=NULL)
    {
        length = strlen(line);
        if (length > 0)
        {
            previousletter = line[0];
        }
        for (i=0; i <= length; i++)
        {
            if(line[i] == ' ' && previousletter !=' ')
            {
                numberOFWords++;
            }
            previousletter = line[i];
        }
        numberOFLines++;
    }
    printf("\n");
    printf("%d",numberOFWords);
    printf("%d",numberOFWords / numberOFLines);
}