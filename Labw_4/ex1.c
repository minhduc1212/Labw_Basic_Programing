//Write a function in C to find the greatest common divisor (gcd) of two positive integer numbers
#include<stdio.h>
#include "ex1.h"

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    gcd(a, b);
    return 0;
}