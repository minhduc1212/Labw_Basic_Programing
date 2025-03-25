#include <stdio.h>



int main(){
    int list[5] = {1, 2, 3, 4, 5};
    int *p = list;
    for (int i = 0; i < 5; i++){
        printf("%d\n", *(list + i)); // or printf("%d\n", *(p + i));
        printf("%d\n", p + i);
    }

    printf("Test\n");
    return 0;

}
