#include<stdio.h>

int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &l[i]);
    }

    for (int i = 0; i < n; i++){
        sum += l[i];
    }
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}