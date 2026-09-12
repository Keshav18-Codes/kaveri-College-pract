/*Write a program to create a union movie (name, release year, duration). Accept
details of n movies. Write a function to sort them according to release year. Display
them in main() function.*/
#include <stdio.h>
#include <string.h>

union movie {
    char name[50];
    int releaseYear;
    float duration;
};

struct MovieDetails {
    union movie m;
    int choice; // 1 for name, 2 for release year, 3 for duration
};

void sortMovies(struct MovieDetails movies[], int n) {
    struct MovieDetails temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (movies[i].m.releaseYear > movies[j].m.releaseYear) {
                temp = movies[i];
                movies[i] = movies[j];
                movies[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Accept number of movies
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    struct MovieDetails movies[n];

    // Accept movie details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);
        printf("Enter 1 for name, 2 for release year, 3 for duration: ");
        scanf("%d", &movies[i].choice);

        if (movies[i].choice == 1) {
            printf("Enter Movie Name: ");
            scanf(" %[^\n]%*c", movies[i].m.name);
        } else if (movies[i].choice == 2) {
            printf("Enter Release Year: ");
            scanf("%d", &movies[i].m.releaseYear);
        } else if (movies[i].choice == 3) {
            printf("Enter Duration (in minutes): ");
            scanf("%f", &movies[i].m.duration);
        }
    }

    // Sort movies by release year
    sortMovies(movies, n);

    // Display sorted movies
    printf("\nMovies sorted by Release Year:\n");
    for (int i = 0; i < n; i++) {
        if (movies[i].choice == 1) {
            printf("Movie Name: %s\n", movies[i].m.name);
        } else if (movies[i].choice == 2) {
            printf("Release Year: %d\n", movies[i].m.releaseYear);
        } else if (movies[i].choice == 3) {
            printf("Duration: %.2f minutes\n", movies[i].m.duration);
        }
        printf("\n");
    }

    return 0;
}