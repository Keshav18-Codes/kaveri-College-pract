#include<stdio.h>
#include<conio.h>
void add();  //function declaration
void main()
{
    printf("\n NO RETURNTYPE NO PARAMETER");
    add;  //Function calling
    printf("\n Kaltay ka");
    getch();
}

    void add() //function definition
    {
        int a,b,c;
        printf("\n ENter two numberrs--->");
        scanf("%d %d",&a,&b);

        c = a + b;

        printf("\n sum of numbers is %d",c);
    }