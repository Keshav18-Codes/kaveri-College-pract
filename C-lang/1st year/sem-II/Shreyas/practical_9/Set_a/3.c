/*Write a program to create a structure Fraction (numerator, denominator). Accept
details of n fractions and write a menu driven program to perform the following
operations. Write separate functions for the different options. Use pointer object.

i. Display the largest fraction
ii. Display the smallest fraction
iii. Sort fractions
iv. Display all*/
#include <stdio.h>
#include <stdlib.h>

struct Fraction {
    int numerator;
    int denominator;
};

void inputFraction(struct Fraction* f) {
    printf("Enter numerator: ");
    scanf("%d", &f->numerator);
    printf("Enter denominator: ");
    scanf("%d", &f->denominator);
}

void displayFraction(struct Fraction f) {
    printf("%d/%d\n", f.numerator, f.denominator);
}

float fractionValue(struct Fraction f) {
    return (float) f.numerator / f.denominator;
}

void displayLargestFraction(struct Fraction* fractions, int n) {
    int largestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (fractionValue(fractions[i]) > fractionValue(fractions[largestIndex])) {
            largestIndex = i;
        }
    }
    printf("Largest fraction: ");
    displayFraction(fractions[largestIndex]);
}

void displaySmallestFraction(struct Fraction* fractions, int n) {
    int smallestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (fractionValue(fractions[i]) < fractionValue(fractions[smallestIndex])) {
            smallestIndex = i;
        }
    }
    printf("Smallest fraction: ");
    displayFraction(fractions[smallestIndex]);
}

void sortFractions(struct Fraction* fractions, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fractionValue(fractions[i]) > fractionValue(fractions[j])) {
                struct Fraction temp = fractions[i];
                fractions[i] = fractions[j];
                fractions[j] = temp;
            }
        }
    }
    printf("Sorted fractions:\n");
    for (int i = 0; i < n; i++) {
        displayFraction(fractions[i]);
    }
}

int main() {
    int n;
    printf("Enter number of fractions: ");
    scanf("%d", &n);

    struct Fraction* fractions = (struct Fraction*) malloc(n * sizeof(struct Fraction));
    for (int i = 0; i < n; i++) {
        printf("Enter details for fraction %d\n", i + 1);
        inputFraction(&fractions[i]);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display the largest fraction\n");
        printf("2. Display the smallest fraction\n");
        printf("3. Sort fractions\n");
        printf("4. Display all fractions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayLargestFraction(fractions, n);
                break;
            case 2:
                displaySmallestFraction(fractions, n);
                break;
            case 3:
                sortFractions(fractions, n);
                break;
            case 4:
                for (int i = 0; i < n; i++) {
                    displayFraction(fractions[i]);
                }
                break;
            case 5:
                free(fractions);
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}