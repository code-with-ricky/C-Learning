#include<stdio.h>
int main() {
    // Constants -> variables whose values should not change once assigned
    // use const keyword

    const int myNum = 15;
    // myNum = 10; // this gives error

    // following will not work
    // const int minutesPerHour;
    // minutesPerHour = 60; // error

    // Good practice --> make the variable for constants in UPPERCASE
    const float PI = 3.14;
    return 0;
}