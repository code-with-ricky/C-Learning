#include<stdio.h>

int main() {
    // Converting from data type to another
    // 1. Implicit conversion (automatically)
    float myFloat = 9;
    printf("%f", myFloat); // 9.000000

    int myInt = 9.99;
    printf("%d", myInt); // 9

    float sum = 5/2;
    printf("Sum = %f", sum); // 2.000000


    // 2. Explicit Conversion (manually)
    int num1 = 5, num2 = 2;
    float sum2 = (float) num1 / num2;
    printf("%f", sum);  // 2.500000
    printf("%.1f", sum2); // 2.5
    
    return 0;
}