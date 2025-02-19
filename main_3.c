#include<stdio.h>

int main (){
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("The area of the circle is: %f\n", 3.14159*r*r);
    printf("The circumference of the circle is: %f\n", 2*3.14159*r);
    
    return 0;
}