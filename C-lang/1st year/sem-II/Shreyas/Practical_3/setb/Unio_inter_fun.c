#include <stdio.h>

void findUnion(int *set1, int size1, int *set2, int size2, int *result, int *resultSize) {
    int i, j;
    *resultSize = 0;

    for (i = 0; i < size1; i++) {
        result[(*resultSize)++] = set1[i];
    }


    for (i = 0; i < size2; i++) {
        int found = 0;
        for (j = 0; j < *resultSize; j++) {
            if (set2[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[(*resultSize)++] = set2[i];
        }
    }
}

void findIntersection(int *set1, int size1, int *set2, int size2, int *result, int *resultSize) {
    int i, j;
    *resultSize = 0;

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (set1[i] == set2[j]) {
                result[(*resultSize)++] = set1[i];
                break;
            }
        }
    }
}

int main() {
    int set1[] = {1, 2, 3, 4, 5};
    int set2[] = {4, 5, 6, 7, 8};
    int unionResult[10], intersectionResult[10];
    int unionSize, intersectionSize;

    void (*unionFunc)(int*, int, int*, int, int*, int*) = findUnion;
    void (*intersectionFunc)(int*, int, int*, int, int*, int*) = findIntersection;

    unionFunc(set1, 5, set2, 5, unionResult, &unionSize);
    intersectionFunc(set1, 5, set2, 5, intersectionResult, &intersectionSize);

    printf("Union: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionResult[i]);
    }
    printf("\n");

    printf("Intersection: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionResult[i]);
    }
    printf("\n");

    return 0;
}
