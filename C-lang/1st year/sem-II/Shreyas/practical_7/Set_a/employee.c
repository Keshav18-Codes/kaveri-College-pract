#include <stdio.h>


struct DOB {
    int date;   
    int month;  
    int year;  
};


struct employee {
    int id;              
    char name[100];   
    float salary;        
    struct DOB dob;     
};


void readEmployee(struct employee *e) {
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);
    printf("Enter Employee Name: ");
    scanf("%s", e->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e->salary);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &e->dob.date, &e->dob.month, &e->dob.year);
}


void displayEmployee(struct employee e) {
    printf("\nEmployee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Employee Salary: %.2f\n", e.salary);
    printf("Date of Birth: %02d/%02d/%04d\n", e.dob.date, e.dob.month, e.dob.year);
}

int main() {
    struct employee e;
    readEmployee(&e);
    displayEmployee(e);
    return 0;
}
