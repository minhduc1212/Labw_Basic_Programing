#include<stdio.h>
// Write a C program to swap the values of two variables without using a third one

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Before swapping: a = %.2f, b = %.2f\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %.2f, b = %.2f\n", a, b);
    return 0;
}