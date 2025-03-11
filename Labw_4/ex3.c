#include<stdio.h>
#include "ex3.h"

int main()
{
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("f(x) = %.2f\n", f(x));
    printf("g(x, y) = %.2f\n", g(x, y));
    return 0;
}