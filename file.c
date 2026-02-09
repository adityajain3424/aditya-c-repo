/*
Program: Write Multiplication Table to File
Concepts: File Handling, fprintf, fopen, fclose
Author: Aditya Jain
*/

#include <stdio.h>

int main() {
    FILE *ptr;
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = fopen("adit.txt", "w");

    if (ptr == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        fprintf(ptr, "%d * %d = %d\n", num, i, num * i);
    }

    fclose(ptr);   // VERY IMPORTANT

    printf("Multiplication table written to file successfully.\n");

    return 0;
}
