#include<stdio.h>
#include<string.h>  

int main(){
    char str[100];
    int num_a = 0;
    scanf("%[^\n]%*c", str);
    for(int i = 0; i < strlen(str); i ++){
        if( str[i] == 'a'){
            printf("a in %d \n", i);
            num_a += 1;
        }
    }
    printf("There are %d a in the string", num_a);
    return 0;
}