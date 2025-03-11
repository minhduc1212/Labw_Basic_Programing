#include<stdio.h>
#include "ex4.h"

int main()
{
    int n;
    printf("Enter a positive integer number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}
