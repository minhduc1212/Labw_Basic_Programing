//calculate system of equations with 2 variables
//use cramel rule
#include<stdio.h>

int main() {
    float a, b, c, d, e, f;
    printf("Enter the values of the first equation: %f, %f, %f\n", a, b, c);
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter the values of the second equation: %f, %f, %f\n", d, e, f);
    scanf("%f %f %f", &d, &e, &f);

    //find det a, b, d, e
    float det = a*e - b*d;
    float det_ax = c*e - b*f;
    float det_by = a*f - c*d;
    if (det == 0) {
        if (det_ax == 0 || det_by == 0) {
            printf("Infinite solutions\n");
        } else {
            printf("No solution\n");
        }
    } else {
        float x = det_ax / det;
        float y = det_by / det;
        printf("x = %f, y = %f\n", x, y);
    }
}