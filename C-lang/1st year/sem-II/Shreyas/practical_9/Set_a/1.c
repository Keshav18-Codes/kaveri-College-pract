/*1. Write a program to accept details for n books and write a menu driven program for
the following:
i. Display all reference books
ii. Search magazine according for specific month
iii. Find the total cost of all books (Hint: Use no_of_copies).*/
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    char type[20]; // "reference", "magazine", etc.
    int month;     // month for magazine
    float cost;
    int no_of_copies;
};

void displayReferenceBooks(struct Book books[], int n) {
    printf("\nReference Books:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].type, "reference") == 0) {
            printf("%s by %s, Cost: %.2f, Copies: %d\n", books[i].title, books[i].author, books[i].cost, books[i].no_of_copies);
        }
    }
}

void searchMagazineByMonth(struct Book books[], int n, int month) {
    printf("\nMagazines for month %d:\n", month);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].type, "magazine") == 0 && books[i].month == month) {
            printf("%s by %s, Cost: %.2f\n", books[i].title, books[i].author, books[i].cost);
        }
    }
}

float totalCostOfBooks(struct Book books[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += books[i].cost * books[i].no_of_copies;
    }
    return total;
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Title: ");
        getchar();  // To clear the newline character
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;  // Remove newline

        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;  // Remove newline

        printf("Type (reference/magazine): ");
        fgets(books[i].type, 20, stdin);
        books[i].type[strcspn(books[i].type, "\n")] = 0;  // Remove newline

        printf("For magazines, enter month (1-12): ");
        if (strcmp(books[i].type, "magazine") == 0) {
            scanf("%d", &books[i].month);
        }

        printf("Cost: ");
        scanf("%f", &books[i].cost);

        printf("Number of copies: ");
        scanf("%d", &books[i].no_of_copies);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display all reference books\n");
        printf("2. Search magazine for specific month\n");
        printf("3. Find total cost of all books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayReferenceBooks(books, n);
                break;
            case 2: {
                int month;
                printf("Enter month (1-12): ");
                scanf("%d", &month);
                searchMagazineByMonth(books, n, month);
                break;
            }
            case 3:
                printf("Total cost of all books: %.2f\n", totalCostOfBooks(books, n));
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