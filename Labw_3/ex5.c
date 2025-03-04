//Write a C program to print Fibonnacci series upto n, n is an interger input from the keyboard.

#include <stdio.h>

int main() {
    int n, a, b, c;
    printf("Enter an interger greater than 0: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a number greater than 0\n");
        return 1;
    }

    printf("Fibonnacci series upto n is: ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("0 ");
            a = 0;
        } else if (i == 1) {
            printf("1 ");
            b = 1;
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        } else {
            if (i == a + b ){
                printf("%d ", i);
                a = b;
                b = i;
            }
        }
    }
}