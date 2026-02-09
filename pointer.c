/*
Program: Area and Perimeter of Circle using Pointers
Concepts: Functions, Pointers, Call by Reference
Author: Aditya Jain
*/

#include <stdio.h>

#define PI 3.14159

void areaperi(int r, float *a, float *p);

int main() {
    int radius;
    float area, peri;

    printf("Enter the value of radius: ");
    scanf("%d", &radius);

    areaperi(radius, &area, &peri);

    printf("Area : %.2f\nPerimeter : %.2f", area, peri);

    return 0;
}

void areaperi(int r, float *a, float *p) {
    *a = PI * r * r;
    *p = 2 * PI * r;
}
