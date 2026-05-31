#include<stdio.h>
#include<stdbool.h> // introduced in C99
                    // add this when want to use bool

int main(){
    bool isLoggedIn = true;
    bool isMinor = false;

    // false --> 0; true --> 1 or any other non zero number
    printf("%d\n", isLoggedIn);
    printf("%d\n", isMinor);

    int a = 10, b = 5;
    bool isGreater = a > b;
    printf("Is a greater than b?: %d", isGreater);
    return 0;
}
