#include<stdio.h>

int main(){

    /* switch = A more efficient alternative to using many "else if" statements
              allows a value to be tested for equality against many cases.*/

    char grade;

    printf("\nEnter a Letter grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did Good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least its not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter valid grades!");
    }
    
            //This is the switch code used above//
    /*switch (expression)
    {
    case (constant-expression :
            code )
        break;
    
    default:
        break;
    }
    */
    return 0;
}