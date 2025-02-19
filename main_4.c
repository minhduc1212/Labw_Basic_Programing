#include<stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 1;
    int x;
    printf("Type a value x :");
    scanf("%d", &x);

    printf("value of a polynomial is : %d", a*x*x + b*x + c);
    return 0;
}