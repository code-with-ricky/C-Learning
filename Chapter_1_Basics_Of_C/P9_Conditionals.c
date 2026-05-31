#include<stdio.h>
#include<stdbool.h>

int main(){
    // if statement
    bool isUserLoggedIn = true;
    if(isUserLoggedIn){
        printf("User is logged in!\n");
    }

    // if-else statement
    int age = 17;
    if(age >= 18) printf("Adult!\n");
    else printf("Minor\n");

    // if-else if - else statement
    int num = 10;
    if(num > 0) printf("Number is positive\n");
    else if(num < 0) printf("Number is negative\n");
    else printf("Number is Zero\n");

    // ternary operator
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good Evening.");
    return 0;
}