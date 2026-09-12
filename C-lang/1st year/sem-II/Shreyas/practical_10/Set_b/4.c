//4. Sort and Display City Names in Ascending Order
#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <city1> <city2> ...\n", argv[0]);
        return 1;
    }

    sortStrings(argv, argc);

    printf("Sorted City Names:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}