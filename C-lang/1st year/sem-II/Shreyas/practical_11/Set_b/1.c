//1. Employee Management Program
#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_number;
    char emp_name[50];
    float emp_salary;
};

void writeEmployeesToFile(int n) {
    FILE *file = fopen("employee.txt", "w");
    struct Employee emp;
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d (Number Name Salary): ", i + 1);
        scanf("%d %s %f", &emp.emp_number, emp.emp_name, &emp.emp_salary);
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }
    
    fclose(file);
}

void searchEmployee(int emp_number) {
    FILE *file = fopen("employee.txt", "r");
    struct Employee emp;
    
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        if (emp.emp_number == emp_number) {
            printf("Employee Found: %d %s %.2f\n", emp.emp_number, emp.emp_name, emp.emp_salary);
            fclose(file);
            return;
        }
    }
    
    printf("Employee not found.\n");
    fclose(file);
}

void highestSalaryEmployee() {
    FILE *file = fopen("employee.txt", "r");
    struct Employee emp, highest;
    highest.emp_salary = 0;
    
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        if (emp.emp_salary > highest.emp_salary) {
            highest = emp;
        }
    }
    
    printf("Highest Salary Employee: %d %s %.2f\n", highest.emp_number, highest.emp_name, highest.emp_salary);
    fclose(file);
}

int main() {
    int n, emp_number;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);
    writeEmployeesToFile(n);
    
    printf("Enter employee number to search: ");
    scanf("%d", &emp_number);
    searchEmployee(emp_number);
    
    highestSalaryEmployee();
    
    return 0;
}
