//Write a C function to enter a positive integer number and calculate n! using recursive function
#include<stdio.h>

int factorial(int n)
{
    int f_num = 1;
    for (int i = 1; i <= n; i++)
    {
        f_num *= i;
    }
    return f_num;
}

