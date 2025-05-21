#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*func_ptr)(int, int);

    // Assign the address of the function to the pointer
    func_ptr = &add;

    // Call the function using the pointer
    int result = func_ptr(5, 7);

    // Print the result
    printf("Result: %d\n", result);  // Output: Result: 12

    return 0;
}
