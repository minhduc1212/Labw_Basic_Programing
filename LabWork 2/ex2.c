#include<stdio.h>
#include<math.h>
//Given three numbers and write a C program to find the minimum and the maximum among these numbers

int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if (c < fmin(a, b)) {
        printf("Minimum = %.2f\n", c);
        printf("Maximum = %.2f\n", fmax(a, b));
    } else if (c > fmax(a, b)) {
        printf("Maximum = %.2f\n", c);
        printf("Minimum = %.2f\n", fmin(a, b));
    } else if (a == b && b == c) {
        printf("Three numbers are equal\n");
    }
}
