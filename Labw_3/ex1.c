//Write a C program to enter a natural number n (n > 1), and find all the divisors of n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("The divisors of %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}