#include<stdio.h>

int main(){
    int i;
    char n_s[i];

    printf("Enter a number of character you want: ");
    scanf("%d", &i);
    char n[i];
    
    printf("Enter the characters: ");
    for (int j = 0; j < i; j++){
        scanf(" %c", &n[j]);
    }

    printf("The string is ");
    printf("%s", n);

    printf("\n");
    printf("New string after reverse is ");
    for (int j = i - 1; j >= 0 ; j--){
        printf("%c", n[j]);
    }

    return 0;
}