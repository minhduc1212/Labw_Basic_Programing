#include<stdio.h>

int gcd(int a, int b)
{
    for(int i = a; i > 0; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            printf("GCD of %d and %d is %d", a, b, i);
            break;
        }
    }
    return 0;
}