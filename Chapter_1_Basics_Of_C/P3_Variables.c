#include <stdio.h>

int main()
{
    // Variables are coontainers for storing data values, like numbers and characters
    //  type of data that can be stored:
    //  int (integers), float (decimal values), char (single character)

    // Declaring (creating) variables
    // type variableName = value;
    int age = 23;

    int myNum;  // Declare variable
    myNum = 10; // assign value later

    // Output variables
    // we must format specifiers
    printf("%d\n", myNum);

    /*
        Format Specifiers:
        --> used togerther with printf() function to print variables
        --> think it as placeholder, tells C what kind of value will be printed
        --> int: %d
            float: %f
            char: %c
    */
    int intNum = 5;
    float decimalNum = 45.64;
    char characterVal = 'A';
    printf("%d\n", intNum);
    printf("%f\n", decimalNum);
    printf("%c\n", characterVal);
    printf("My age is %d and i selected the letter as %c\n", age, characterVal);


    // Declare multiple variables
    int x = 5, y = 6, z = 7;
    printf("x = %d\ny = %d\nz = %d", x, y, z);


    /*
        C variable naming:
        --> C variables must be identified with unique names
        --> these names are called identifiers

        --> The general rules for naming variables are:
            --> Names can contain letters, digits and underscores
            --> Names must begin with a letter or an underscore (_)
            --> Names are case-sensitive (myVar and myvar are different variables)
            --> Names cannot contain whitespaces or special characters like !, #, %, etc.
            --> Reserved words (such as int) cannot be used as names
    */

    return 0;
}