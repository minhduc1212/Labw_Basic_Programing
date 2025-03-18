#include <stdio.h>

int bubble (int n[]) {
    printf("Bubble sort\n");
    printf("Before ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i - 1; j++)
            if(n[j] > n[j+1]) {
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
    }

    printf("After ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
}

int insertion(int n[]){
    printf("Insertion sort\n");
    printf("Before ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    for (int i = 1; i < 7; i++) {
        for (int j = i; j > 0; j--) {
            if (n[j] < n[j-1]) {
                int temp = n[j];
                n[j] = n[j-1];
                n[j-1] = temp;
            }
        }
    }

    printf("After ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
}

int selection (int n []) {
    printf("Selection sort\n");
    printf("Before ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    for(int i = 0; i < 7; i++) {
        int min = i;
        for (int j = i+1; j < 7; j++) {
            if (n[j] < n[min]) {
                int temp = n[j];
                n[j] = n[min];
                n[min] = temp;
            }
        }
    }

    printf("After ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", n[i]);
    }
}

int main () {
    int n1[7] = {2, 8, 5, 3, 9, 4, 1};
    int n2[7] = {2, 8, 5, 3, 9, 4, 1};
    int n3[7] = {2, 8, 5, 3, 9, 4, 1};
    
    bubble(n1);
    printf("\n");
    insertion(n2);
    printf("\n");
    selection(n3);
    
    return 0;
}
