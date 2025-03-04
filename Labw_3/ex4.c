//Write a C program to enter a positive number and calculate product of digits of the number using modulus operator % and while loop.

#include<stdio.h>

int main()
{
    int n, lastDigit, product;
    product = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        lastDigit = n % 10;
        product *= lastDigit;
        n /= 10;
    }

    printf("The product of the digits of the number is: %d\n", product);

    return 0;
    
}