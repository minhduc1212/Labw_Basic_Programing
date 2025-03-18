#include<stdio.h>

int odd (int n) {
    int odd_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            odd_sum += i;
        }
    }
    return odd_sum;
}

int even(int n) {
    int even_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        }
    }
    return even_sum;
}


int main() {
    int n;
    printf("enter a positive integer number you want: \n");
    scanf("%d", &n);


    printf("sum of odd numbers is: %d\n", odd(n));
    printf("sum of even numbers is: %d\n", even(n));
    
    return 0;
}
