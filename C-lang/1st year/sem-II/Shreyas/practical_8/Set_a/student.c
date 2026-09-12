#include<stdio.h>
struct person{
    int pid;
    char pname;
    int page;
    float psalary;
};
int main()
struct person p;

printf("Enter person ID:");
scanf("%d",&p.pid);
printf("Enter person name:");
scanf("%s",p.name);
printf("Enter person age:");
scanf("%d",&p.page);
printf("Enter person salary:");
scanf("%f",&p.psalary);

// display the information

printf("\nperson information:\n");
printf("ID:%d\n",p.pid);
printf("Name:%s\n",p.name);
printf("Age:%d\n",p.age);
printf("Salary:%.2f\n",p.salary);

return 0;
}