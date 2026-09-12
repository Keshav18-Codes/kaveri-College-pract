// program to check whether Triangle is valid or not...
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter three side for a triangle:\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if((s1+s2)>s3 )
    {
        if((s2+s3)>s1)
        {
            if((s1+s3)>s2)
            {
                printf("Triangle is valid");
            }
        }
    }
    else
    {
        printf("Triangle is invalid");
    }
    return 0;
    
}
