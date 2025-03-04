//Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %f\n", n, sum);

    return 0;
}