//4. Program to Display Command Line Arguments in Reverse Order
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Command line arguments in reverse order:\n");
    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", argv[i]);
    }
    return 0;
}