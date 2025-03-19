#include<stdio.h>

int sum1(int m[][100], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum += m[i][j];
        }
    }
    return sum;
}

int transpose(int m[][100], int n){
    printf("Transpose:\n");
    int t[n][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            t[j][i] = m[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}


int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m[n][100];
    for (int i = 0; i < n; i++){
        printf("Enter the element of row %d: ", i + 1);
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Sum: %d\n", sum1(m, n));

    transpose(m, n);
    

    return 0;
}