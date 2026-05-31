#include<stdio.h>

int main() {
    // While Loop
    int i=0;
    while(i < 5) {
        printf("%d\n", i);
        i++;
    }

    // countdown example
    int countdown = 3;
    while(countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year!!\n");


    // Do While Loop
    int num = 1;
    do {
        printf("%d ", num);
        num++;
    } while(num <= 10);
    printf("\n");

    // Do while in case of false condition
    // even if conddition is false, do while loop executes atleast once
    int val = 10;
    do {
        printf("val is %d\n", val);
        val++;
    } while(val < 5);
    return 0;
}