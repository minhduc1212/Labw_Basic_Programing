// Write a C function to swap two variables using pointers

#include <stdio.h>

int main () {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2); // or scanf("%d %d", &a, &b);
    printf("After\n");
    printf("A is %d\n", *p1);
    printf("B is %d\n", *p2);

    int *temp = p1;
    p1 = p2;
    p2 = temp;

    printf("Before\n");
    printf("A is %d\n", *p1);
    printf("B is %d\n", *p2);

    return 0; 
}
