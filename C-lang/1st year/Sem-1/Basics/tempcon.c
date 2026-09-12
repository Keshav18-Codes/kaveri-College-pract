#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (f) or (c)?:");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temp in celcius:");
        scanf("%f",&temp);
        temp = (temp * 9/5)+32;
        printf("The temp in fahrenheit is : %.1f",temp);
    }
    else if(unit == 'F'){
        printf("Enter temp in Fahrenheit:");
        scanf("%f",&temp);
        temp = ((temp - 32)*5)/9;
        printf("The temp in Celcius is : %.1f",temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement",unit);
    }

}
