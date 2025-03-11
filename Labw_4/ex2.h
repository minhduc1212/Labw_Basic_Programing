#include <stdio.h>

int gcd(int a, int b, int c, int d)
{
    for(int i = a; i > 0; i--)
    {
        if(a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0)
        {
            printf("GCD of %d, %d, %d and %d is %d", a, b, c, d, i);
            break;
        }
    }
    return 0;
}