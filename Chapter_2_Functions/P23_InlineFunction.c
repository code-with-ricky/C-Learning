#include<stdio.h>

// An inline function is a small function that asks the compiler to insert its code directly where it is called, instead of jumping to it.

//This can make short, frequently used functions a little faster, because it removes the small delay of a normal function call.

inline int sqaure(int x){
    return x * x;
}

int main(){
    // inline suggests to the compiler to copy the function's code directly where it is used.
    printf("Square of 2: %d\n", sqaure(2));
    printf("Square of 4: %d\n", sqaure(4));
    return 0;

    /*
        Note:
        --> use inline for small and simple functions

        Avoid using inline for:
        --> large functions
        --> recursive functions
        --> functions that are rarely called
    
    */
}