//Write a C program to find a factorial of n, n is an interger input from the keyboard
#include<stdio.h>

int main()
{
    int n, start;
    start = 1;
    printf("Enter an interger: ");
    scanf("%d", &n);

    for( int i = 1; i <= n ; i++) {
        start *= i;
    }
    printf("The factorial of %d is: %d\n", n, start);
}