//write a program to create a structure student (roll,name , marksof six subject,total,percentage) accept details of 5 students and display the same 

#include<stdio.h>

struct student
{
    int sroll;
    char sname[100];
    int smarks;
    int stotal;
    int spercentage;
};

int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the roll number of student %d:",i+1);
        scanf("%d",&s[i].sroll);
        printf("\n Enter the name of student %d:",i+1);
        scanf("%s",&s[i].sname);
        printf("\n Enter the marks of six subject of student %d:",i+1);
        for(int j=0;j<6;j++)
        {
            scanf("%d",&s[i].smarks);
            s[i].stotal=s[i].stotal+s[i].smarks;
            }
            s[i].spercentage=(s[i].stotal/600)*100;
            }
            for(i=0;i<5;i++)
            {
                printf("\n Roll number of student %d is %d",i+1,s[i].sroll);
                    printf("\n Name of student %d is %s",i+1,s[i].sname);
                        printf("\n Marks of six subject of student %d is %d",i+1,s[i].smarks);
                            printf("\n Total marks of student %d is %d",i+1,s[i].stotal);
                                printf("\n Percentage of student %d is %d",i+1,s[i].spercentage);
                                    }
                                }
                                
                                


                                    
        


