#include<stdio.h>
#include "ex2.h"

int main()
{
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    gcd(a, b, c, d);
    return 0;
}