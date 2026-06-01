#include<stdio.h>

int sum(int k);
void countdown(int n);
int factorial(int n);

int main(){
    int result = sum(10);
    printf("Sum = %d\n", result);

    countdown(5);

    printf("\nFactorial of 5 = %d\n", factorial(5));
    return 0;
}
// find sum from 1 to K
int sum(int k){
    if(k > 0){
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

void countdown(int n){
    if(n > 0){
        printf("%d ", n);
        countdown(n-1);
    }
}

int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    else return n * factorial(n-1);
}