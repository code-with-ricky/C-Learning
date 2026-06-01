/*
    Scope: region where variable of C is accessible is called scope
    1. Local scope: 
        --> A variable created inside a function belongs to the local scope of that function, and can only be used inside that function
        --> A local variable cannot be used outside the function it belongs to.

    2. Global Scope:
        --> A variable created outside of a function, is called a global variable and belongs to the global scope.
        --> Global variables are available from within any scope, global and local

    Naming variables:
    --> if samel named variables are used as local and global variables both then both are treated separately
*/

#include<stdio.h>

int y = 10; // global variable
int z = 15;
int m = 45;

void myFunction(){
    int x = 5; // local variable that is accessible within the function oonly
    printf("x inside myFunction = %d\n", x);
    printf("y inside myFunction = %d\n", y);
    int z = 35;
    printf("z inside myFunction = %d\n", z); // referes to local variable z
    printf("m inside myFunction = %d\n", ++m);
}

int main(){
    myFunction();
    // printf("%d", x);  // variable x is not accessible here
    printf("y inside main = %d\n", y);
    printf("z inside main = %d\n", z);  // refers to the global variable z
    printf("m inside main = %d\n", m);
    return 0;
}