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

//another way to solve this problem
#include<stdio.h>

int main() {
    float a, b, c;
    float numbers[3];
    float max;

    printf("Type three values a, b, c :");
    scanf("%f %f %f", &a, &b, &c);
    numbers[0] = a;
    numbers[1] = b;
    numbers[2] = c;

    for (int i = 0; i < 3; i++) {
        if ( i == 0 ) {
           max = numbers[i];
        }
        else {
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
    }
    printf("The maximum value is : %f", max);
    return 0;
}
