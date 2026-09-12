/*1. Write a program create a structure item(item number, item name, rate, qty, total).
Accept details of n items calculate total as qty * rate. And display Bill in the
following format ;
Sr. No. Item Name Rate Qty Total
1 Pen 25 3 75.00
2 Eraser 10 1 10.00
Grand Total : 85.00*/
#include <stdio.h>

struct item {
    int itemNumber;
    char itemName[30];
    float rate;
    int qty;
    float total;
};

int main() {
    int n;

    // Accept number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct item items[n];

    // Accept item details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Item Number: ");
        scanf("%d", &items[i].itemNumber);
        printf("Item Name: ");
        scanf(" %[^\n]%*c", items[i].itemName);  // To read multi-word names
        printf("Rate: ");
        scanf("%f", &items[i].rate);
        printf("Quantity: ");
        scanf("%d", &items[i].qty);

        // Calculate total
        items[i].total = items[i].rate * items[i].qty;
    }

    // Display the bill
    printf("\nBill:\n");
    printf("Sr. No.  Item Name        Rate  Qty  Total\n");
    printf("-------------------------------------------\n");
    float grandTotal = 0;
    for (int i = 0; i < n; i++) {
        printf("%d        %-15s  %.2f  %d   %.2f\n", 
               i + 1, items[i].itemName, items[i].rate, items[i].qty, items[i].total);
        grandTotal += items[i].total;
    }
    printf("-------------------------------------------\n");
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}