/*
Program: Book Details using Structure
Concepts: Structures, Input/Output
Author: Aditya Jain
*/

#include <stdio.h>

struct book {
    char name[30];
    float price;
    int pages;
};

int main() {
    struct book b1, b2, b3;

    printf("Enter book name, price and pages\n");

    scanf("%29s %f %d", b1.name, &b1.price, &b1.pages);
    scanf("%29s %f %d", b2.name, &b2.price, &b2.pages);
    scanf("%29s %f %d", b3.name, &b3.price, &b3.pages);

    printf("\nBooks details entered:\n");

    printf("%s %.2f %d\n", b1.name, b1.price, b1.pages);
    printf("%s %.2f %d\n", b2.name, b2.price, b2.pages);
    printf("%s %.2f %d\n", b3.name, b3.price, b3.pages);

    return 0;
}
