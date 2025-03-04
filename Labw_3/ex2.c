//Write a C program to enter a natural number n (n > 1), and find all the prime numbers from 1 to n.

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    printf("The prime numbers from 1 to %d are: ", n);
    for (int i = 2; i <= n; i++)
    {
        bool prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}