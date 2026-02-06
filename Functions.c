/*
Program: Sum of Digits using Recursion
Concepts: Recursion, Functions
Author: Aditya Jain
*/

#include <stdio.h>

int sm(int a);

int main() {
    int x, res;

    printf("Enter the number: ");
    scanf("%d", &x);

    res = sm(x);

    printf("Sum of digits = %d", res);
    return 0;
}

int sm(int a) {

    if (a < 0)
        return sm(-a);     // handle negative numbers

    if (a == 0)
        return 0;          // base case

    return (a % 10) + sm(a / 10);
}
