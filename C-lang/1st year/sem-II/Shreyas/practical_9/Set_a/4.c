/*Write a program to create a union car (carnumber, carmodelname, carcolor, carcost).
Accept details of n cars and write a menu driven program to perform the following
operations. Write separate functions for the different options.
i. Search by name
ii. Delete by no
iii. Display all*/
#include <stdio.h>
#include <string.h>

union Car {
    int carNumber;
    char modelName[50];
    char color[20];
    float cost;
};

void searchByName(union Car cars[], int n, char model[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(cars[i].modelName, model) == 0) {
            printf("Car found: %d, Model: %s, Color: %s, Cost: %.2f\n", cars[i].carNumber, cars[i].modelName, cars[i].color, cars[i].cost);
        }
    }
}

void deleteByCarNumber(union Car cars[], int* n, int carNumber) {
    for (int i = 0; i < *n; i++) {
        if (cars[i].carNumber == carNumber) {
            for (int j = i; j < *n - 1; j++) {
                cars[j] = cars[j + 1];
            }
            (*n)--;
            printf("Car with number %d deleted.\n", carNumber);
            return;
        }
    }
    printf("Car not found.\n");
}

void displayAllCars(union Car cars[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Car %d: Model: %s, Color: %s, Cost: %.2f\n", cars[i].carNumber, cars[i].modelName, cars[i].color, cars[i].cost);
    }
}

int main() {
    int n;
    printf("Enter number of cars: ");
    scanf("%d", &n);

    union Car cars[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for car %d\n", i + 1);
        printf("Car Number: ");
        scanf("%d", &cars[i].carNumber);
        printf("Model Name: ");
        getchar();  // To clear newline
        fgets(cars[i].modelName, 50, stdin);
        cars[i].modelName[strcspn(cars[i].modelName, "\n")] = 0; // Remove newline
        printf("Color: ");
        fgets(cars[i].color, 20, stdin);
        cars[i].color[strcspn(cars[i].color, "\n")] = 0; // Remove newline
        printf("Cost: ");
        scanf("%f", &cars[i].cost);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Search by name\n");
        printf("2. Delete by car number\n");
        printf("3. Display all cars\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char model[50];
                printf("Enter model name to search: ");
                getchar(); // To clear newline
                fgets(model, 50, stdin);
                model[strcspn(model, "\n")] = 0; // Remove newline
                searchByName(cars, n, model);
                break;
            }
            case 2: {
                int carNumber;
                printf("Enter car number to delete: ");
                scanf("%d", &carNumber);
                deleteByCarNumber(cars, &n, carNumber);
                break;
            }
            case 3:
                displayAllCars(cars, n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}