#include<stdio.h>

int main(){
    /*
        Memory Address
        --> When a variable is created in C, a memory address is assigned to the variable.
        --> The memory address is the location of where the variable is stored on the computer.
        --> When we assign a value to the variable, it is stored in this memory address.
        --> To access it, use the reference operator (&), and the result represents where the variable is stored
        --> The memory address is in hexadecimal form (0x..)
    */
    int myAge = 43;
    printf("%p", &myAge);  // example output: 0000001c13fff83c
                           // &myAge is often called a "pointer"
                           // To print pointer values, we use the %p format specifier.
    return 0;
}