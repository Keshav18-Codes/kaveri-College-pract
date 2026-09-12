#include <stdio.h>

// Define a structure for date
typedef struct {
    int dd;
    int mm;
    int yyyy;
} Date;

// Define a union for employee details
typedef union {
    int id;
    char name[100];
    Date joiningDate;
} EmployeeDetails;

// Define a structure for employee
typedef struct {
    int id;
    char name[100];
    Date joiningDate;
} Employee;

// Function to accept employee details
void acceptEmployeeDetails(Employee *employees, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter employee %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Joining Date (dd mm yyyy): ");
        scanf("%d %d %d", &employees[i].joiningDate.dd, &employees[i].joiningDate.mm, &employees[i].joiningDate.yyyy);
    }
}

// Function to display employee details
void displayEmployeeDetails(Employee *employees, int n, int month) {
    printf("Employees having joining date in month %d:\n", month);
    for (int i = 0; i < n; i++) {
        if (employees[i].joiningDate.mm == month) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Joining Date: %d-%d-%d\n", employees[i].joiningDate.dd, employees[i].joiningDate.mm, employees[i].joiningDate.yyyy);
            printf("\n");
        }
    }
}

int main() {
    int n;

    // Accept the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create an array of employees
    Employee employees[n];

    // Accept employee details
    acceptEmployeeDetails(employees, n);

    // Accept the month to display employees
    int month;
    printf("Enter the month to display employees (1-12): ");
    scanf("%d", &month);

    // Display employee details
    displayEmployeeDetails(employees, n, month);

    return 0;
}