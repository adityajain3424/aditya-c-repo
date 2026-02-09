/*
Program: Dynamic Memory Allocation using calloc and realloc
Concepts: Heap Memory, calloc, realloc, free
Author: Aditya Jain
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;
    int n = 6;
    int newSize = 10;

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Entered values:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter %d more integers:\n", newSize - n);
    for (i = n; i < newSize; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Final array:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);   // VERY IMPORTANT

    return 0;
}
