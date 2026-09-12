/*Write a program to create a structure Mobile (Mobno,MobName, MobCost,
    MobColor ) Accept details of n mobile information and display following;
    
    i. Display all
    ii. Search for specific item
    iii. Sort according to cost*/
    #include <stdio.h>
    #include <string.h>
    
    struct Mobile {
        char Mobno[15];
        char MobName[30];
        float MobCost;
        char MobColor[20];
    };
    
    void displayAll(struct Mobile mob[], int n) {
        printf("\nMobile Details:\n");
        for (int i = 0; i < n; i++) {
            printf("Mobile No: %s\n", mob[i].Mobno);
            printf("Mobile Name: %s\n", mob[i].MobName);
            printf("Mobile Cost: %.2f\n", mob[i].MobCost);
            printf("Mobile Color: %s\n", mob[i].MobColor);
            printf("\n");
        }
    }
    
    void searchMobile(struct Mobile mob[], int n, char searchName[]) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(mob[i].MobName, searchName) == 0) {
                printf("Found Mobile: %s\n", mob[i].MobName);
                printf("Mobile No: %s\n", mob[i].Mobno);
                printf("Mobile Cost: %.2f\n", mob[i].MobCost);
                printf("Mobile Color: %s\n", mob[i].MobColor);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Mobile not found.\n");
        }
    }
    
    void sortByCost(struct Mobile mob[], int n) {
        struct Mobile temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (mob[i].MobCost > mob[j].MobCost) {
                    temp = mob[i];
                    mob[i] = mob[j];
                    mob[j] = temp;
                }
            }
        }
        printf("\nMobile Details sorted by Cost:\n");
        displayAll(mob, n);
    }
    
    int main() {
        int n;
        char searchName[30];
    
        // Accept number of mobiles
        printf("Enter the number of mobiles: ");
        scanf("%d", &n);
    
        struct Mobile mob[n];
    
        // Accept mobile details
        for (int i = 0; i < n; i++) {
            printf("\nEnter details for mobile %d:\n", i + 1);
            printf("Mobile No: ");
            scanf(" %[^\n]%*c", mob[i].Mobno);
            printf("Mobile Name: ");
            scanf(" %[^\n]%*c", mob[i].MobName);
            printf("Mobile Cost: ");
            scanf("%f", &mob[i].MobCost);
            printf("Mobile Color: ");
            scanf(" %[^\n]%*c", mob[i].MobColor);
        }
    
        // Display all mobile details
        displayAll(mob, n);
    
        // Search for a specific mobile
        printf("\nEnter Mobile Name to search: ");
        scanf(" %[^\n]%*c", searchName);
        searchMobile(mob, n, searchName);
    
        // Sort mobiles by cost and display them
        sortByCost(mob, n);
    
        return 0;
    }