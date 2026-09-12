
//4. Separate even and odd numbers into different files
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter the filename containing integers: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    FILE *evenFile = fopen("even_numbers.txt", "w");
    FILE *oddFile = fopen("odd_numbers.txt", "w");

    if (file == NULL || evenFile == NULL || oddFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(file);
    fclose(evenFile);
    fclose(oddFile);
    printf("Even and odd numbers separated into respective files.\n");
    return 0;
}