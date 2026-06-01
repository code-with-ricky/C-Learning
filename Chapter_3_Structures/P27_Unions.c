/*
    Union:
    --> union is similar to struct, it can store members of different data types
    --> difference:
        --> in struct, each member has its own memory
        --> in union, all members share the same memory which means you can only use one of the value at a time

    Note:
    unions are useful when you only need to store one of several possible types at a time, and you want to save memory.
*/

#include <stdio.h>
#include <stdalign.h>

// declare union
union myUnion
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    union myUnion u1;  // create a union variable with the name "u1"

    // access union members
    u1.myNum = 100;

    // Since this is the last value written to the union, myNum no longer holds 100 - its value is now invalid
    u1.myLetter = 'D';

    printf("myNum: %d\n", u1.myNum);  // its printing the Ascii value of letter stored in myLetter
    printf("myLetter: %c\n", u1.myLetter);
    printf("Size of union: %zu bytes\n", sizeof(u1)); // 32 bytes
    return 0;
}