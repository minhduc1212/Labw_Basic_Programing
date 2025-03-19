#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char new_str[100];
    char del;
    int j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    printf("Enter a character you want to delete: ");
    scanf("%c", &del);


    for(int i = 0; i < strlen(str); i++){
        if(str[i] != del){
            new_str[j] = str[i];
            j += 1;
        }
    }
    new_str[j] = '\0';
    printf("New str is %s", new_str);

    return 0;
}