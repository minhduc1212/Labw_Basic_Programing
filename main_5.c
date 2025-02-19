#include<stdio.h>
#include<math.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The value of expression is: %f", 3*a - pow(b, 3) - 2*sqrt(c));
    return 0;
}