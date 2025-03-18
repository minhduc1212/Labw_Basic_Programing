#include<stdio.h>


int min_num(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int max_num(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("enter number of digits you want: \n");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("enter digit %d: \n", i+1);
        scanf("%d", &a[i]);
    }

    printf("min number is: %d\n", min_num(a, n));
    printf("max number is: %d\n", max_num(a, n));
    return 0;
}