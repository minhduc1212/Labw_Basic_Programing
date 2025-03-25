#include<stdio.h>

int main() {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2); // or scanf("%d %d", &a, &b);
    printf("A is %d\n", *p1);
    printf("B is %d", *p2);


    return 0;
}