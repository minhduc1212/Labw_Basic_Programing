#include<stdio.h>

int the_first() {
    printf("Hello USTH World\n");
    return 0;
}

int the_second() {
    int myInt = 10;
    float myFloat = 3.14f;
    double myDouble = 3.1415926535;
    char myChar = 'A';
    
    printf("Integer: %d\n", myInt);
    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    printf("Character: %c\n", myChar);
    
    return 0;
}

int the_third() {  // Declaring a character array to store the input string
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);  // Reads a string (without spaces)

    printf("You entered: %s\n", str);

    return 0;
}

int the_forth() {
    printf("New line: Hello USTH\n");
    printf("Tab space: Hello\tUSTH\n");
    printf("Backslash: Hello \\ USTH\n");
    printf("Double quote: \"Hello USTH\"\n");
    printf("Single quote: \'Hello USTH\'\n");

    return 0;
}

int main() {
    the_first();
    the_second();
    the_third();
    the_forth();

    return 0;
}