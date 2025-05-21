//Do the following declaration:
//Declare p as a pointer to int
//Declare pp as a pointer to a pointer to int
//Declare parr as an array of 10 pointers to int

#include <stdio.h>

int main () {
    int *p;
    int **pp;
    int *parr[10];

    // Example usage (not required, just for demonstration)
    int a = 5;
    p = &a;
    pp = &p;
    parr[0] = &a;

    printf("Value of a: %d\n", *p);
    printf("Value of a via pp: %d\n", **pp);
    printf("Value of a via parr[0]: %d\n", *parr[0]);

    return 0;
}