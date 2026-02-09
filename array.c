/*
Program: Selection Sort
Concepts: Arrays, Nested Loops, Sorting
Author: Aditya Jain
*/

#include <stdio.h>

int main() {
    int arr[] = {64, 25, 22, 12, 11};
    int i, j, min, temp;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
