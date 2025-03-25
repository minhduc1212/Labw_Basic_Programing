#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamic memory allocation for the array
    int *list = (int*)malloc(n * sizeof(int));
    if (list == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &list[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d \n", list[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(list);
    return 0;
}