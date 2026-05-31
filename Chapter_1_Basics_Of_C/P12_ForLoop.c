#include<stdio.h>
int main() {
    for(int i=1; i<=5; i++){
        printf("%d\n", i);
    }

    // Print even numbers
    for(int i=0; i<=10; i=i+2) {
        printf("%d\n", i);
    }

    // sum of numbers from 1 to 5
    int sum = 0;
    for(int i=1; i<=5; i++){
        sum = sum + i;
    }
    printf("Sum = %d\n", sum);

    // Nested for loop
    for(int i = 1; i <= 2; i++) {
        printf("Outer: %d\n", i);   // executes 2 times
        for(int j = 1; j <= 3; j++) {
            printf("Inner: %d\n", j); // Executes 2*3 = 6 times
        }
    }
    return 0;
}