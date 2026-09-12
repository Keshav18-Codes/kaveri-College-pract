/*2. Write a program to create a union employee(id, name, joiningdate(dd, mm, yyyy)).
Accept the details for n employees. Accept month and display the details of
employee having birthdate in that month.*/
#include <stdio.h>
#include <string.h>

union Employee {
    int id;
    char name[50];
    struct {
        int day, month, year;
    } joiningDate;
};

void displayEmployeeByMonth(union Employee emp[], int n, int month) {
    for (int i = 0; i < n; i++) {
        if (emp[i].joiningDate.month == month) {
            printf("Employee %d: Name: %s, Joining Date: %d-%d-%d\n", emp[i].id, emp[i].name, emp[i].joiningDate.day, emp[i].joiningDate.month, emp[i].joiningDate.year);
        }
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    union Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        getchar();  // To clear the newline character
        fgets(emp[i].name, 50, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = 0;  // Remove newline
        printf("Joining date (dd mm yyyy): ");
        scanf("%d %d %d", &emp[i].joiningDate.day, &emp[i].joiningDate.month, &emp[i].joiningDate.year);
    }

    int month;
    printf("Enter month to search for employees: ");
    scanf("%d", &month);

    displayEmployeeByMonth(emp, n, month);

    return 0;
}