#include <stdio.h>

// Define the structure
struct customer {
    int cno;                // Customer Number
    char cname[100];        // Customer Name
    char caddress[200];     // Customer Address
};

// Function to read information of customers
void readCustomers(struct customer *c, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter Customer Number: ");
        scanf("%d", &c[i].cno);
        printf("Enter Customer Name: ");
        scanf("%s", c[i].cname);
        printf("Enter Customer Address: ");
        scanf(" %[^\n]", c[i].caddress); // To read string with spaces
    }
}

// Function to display information of customers
void displayCustomers(struct customer *c, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nCustomer Number: %d\n", c[i].cno);
        printf("Customer Name: %s\n", c[i].cname);
        printf("Customer Address: %s\n", c[i].caddress);
    }
}

int main() {
    struct customer customers[3]; // Array to hold 3 customers
    readCustomers(customers, 3);
    displayCustomers(customers, 3);
    return 0;
}
