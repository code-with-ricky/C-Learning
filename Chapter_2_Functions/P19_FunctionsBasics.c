#include<stdio.h>

// create a function
// return_type function_name(parameters) {}
// void return type means function doesnot return any value
void myFun(){
    printf("This is my first function\n");
}

int main(){
    /*
        Functions are block of code which only runs when it is called
        data known as parameters can be passed to the functions
        functions are used to perform certain actions, and they are important for reusing code
    */

    // Predefined functions: main(), printf(), scanf() etc

    // function call
    myFun();
    myFun();
    myFun();
    return 0;
}