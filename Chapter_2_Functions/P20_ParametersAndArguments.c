#include<stdio.h>

// variables in the function definition are called parameters
void calculateSum(int num1, int num2){
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}

void printArrayElements(int myArray[5]) {
    for(int i=0; i<5; i++){
        printf("%d ", myArray[i]);
    }printf("\n");
}

// function returning a value
int getProduct(int num1, int num2){
    return num1 * num2;
}

int main(){
    // variables/values passed during function call are called arguments
    calculateSum(34, 30);
    calculateSum(19, 20);
    calculateSum(20, -8);

    int myArray[5] = {20, 10, 50, 40, 30};
    printArrayElements(myArray);

    int product = getProduct(12, 3);
    printf("Product = %d\n", product);
    return 0;
}