#include<stdio.h>
void adddistance(float *distance, float *increment, int *flag1);
   int main()
   {
    float distance,increment;
    int flag1;
    printf("\n Enter distance :");
    scanf("%f" ,&distance);
    printf("\n Enter the choice as follows:");
    printf("\n 1 for kilometer\n 2 for centimeter\n 3 for milimeter:");
    scanf("%d",&flag1);
    printf("\n Enter the increment in milimeter:");
    scanf("%f",&increment);
    adddistance(&distance,&increment,&flag1);
    if(flag1==1)
    {
      printf("\n New distance in kilometer is %f",distance);
    }
    else if(flag1==2)
    {
      printf("\n New distance in centimeter is %f", distance);
    }
    else if(flag1==3)
    {
      printf("\n New distance in milimeter is %f", distance);

    }
    else
    {
      printf("\n Invalid choice");
    
    } 
    return 0;
  }
void adddistance(float *distance, float *increment, int *flag1)
{
   if(*flag1==1)
   {
     *distance=((*distance)*1000000);
     *distance=(*distance)+(*increment);
     *distance=(*distance)/1000000;
    }
    else if (*flag1==2)
    {
     *distance=(*distance)*10;
     *distance=(*distance)+(*increment);
     *distance=(*distance)/10;
     }
    else
    {
     *distance=(*distance)+(*increment);

    }
 }
