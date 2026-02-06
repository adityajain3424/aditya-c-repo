/*
Program: Sum of Digits
Concepts: Functions, Loops, Modulus Operator
Author: Aditya Jain
*/

#include <stdio.h>

int sumOfDigits(int a);

int main() {
    int x, res;

    printf("Enter the number: ");
    scanf("%d", &x);

    res = sumOfDigits(x);

    printf("The sum of digits of this number is %d", res);
    return 0;
}

int sumOfDigits(int a) {
    int s = 0;

    if (a < 0)
        a = -a;   // handle negative numbers

    while (a > 0) {
        s = s + (a % 10);
        a = a / 10;
    }

    return s;
}
