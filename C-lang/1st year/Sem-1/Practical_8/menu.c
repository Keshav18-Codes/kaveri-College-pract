#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double pr,n1,p,a,f,sqr,n3,n4;
    do
    {
        printf("\nEnter your choice");
        printf("\n1.Power or e^x\n2.Square root\n3.Floor\n4.Ceiling\n5.Sine\n6.Cosine\n7.log\n8.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Enter a no and power:");
            scanf("%f%f",&n1,&p);
            printf("%f",pow(n1,p));
            break;

            case 2:
            printf("Enter a no:");
            scanf("%f",&a);
            sqr=sqrt(a);
            printf("%f",sqr);
            break;

            case 3:
            printf("Enter a no:");
            scanf("%lf",&n3);
            printf("%f",floor(n3));
            break;

            case 4:
            printf("Enter a no:");
            scanf("%f",&n4);
            printf("%f",ceil(n4));
            break;

            case 5:
            printf("Enter a no:");
            scanf("%f",&n4);
            printf("%f",sin(n4));
            break;

            case 6:
            printf("Enter a no:");
            scanf("%f",&n4);
            printf("%f",cos(n4));
            break;

            case 7:
            printf("Enter a no:");
            scanf("%f",&n4);
            printf("%f",log(n4));
            break;
        }
    }while(n!=7);
}