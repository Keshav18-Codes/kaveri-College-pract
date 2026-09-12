#include <stdio.h>

// Define the structure
struct person {
    int pid;            // Person ID
    char pname[100];    // Person Name
    int page;          // Person Age
    float salary;      // Person Salary
};

// Function to read information
void readPerson(struct person *p) {
    printf("Enter Person ID: ");
    scanf("%d", &p->pid);
    printf("Enter Person Name: ");
    scanf("%s", p->pname);
    printf("Enter Person Age: ");
    scanf("%d", &p->page);
    printf("Enter Person Salary: ");
    scanf("%f", &p->salary);
}

// Function to display information
void displayPerson(struct person p) {
    printf("\nPerson ID: %d\n", p.pid);
    printf("Person Name: %s\n", p.pname);
    printf("Person Age: %d\n", p.page);
    printf("Person Salary: %.2f\n", p.salary);
}

int main() {
    struct person p;
    readPerson(&p);
    displayPerson(p);
    return 0;
}
