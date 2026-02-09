/*
Program: String Search in Array
Concepts: 2D Character Arrays, strcmp, Loops
Author: Aditya Jain
*/

#include <stdio.h>
#include <string.h>

int main() {
    char ms[6][10] = {
        "aditya",
        "aarav",
        "daksh",
        "gargi",
        "akshita",
        "bhopu"
    };

    char yourname[10];
    int i, flag = 0;

    printf("Enter the name you want to search: ");
    scanf("%9s", yourname);

    for (i = 0; i < 6; i++) {
        if (strcmp(ms[i], yourname) == 0) {
            printf("Name was found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Name was not found, sorry!");
    }

    return 0;
}
