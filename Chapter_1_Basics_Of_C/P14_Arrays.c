#include<stdio.h>

int main() {
    // used to store multiple values of same type in single variable rather than creating separate variables for each
    // create an array and assign values
    int myNumbers[] = {25, 32, 89, 54, 100};

    // Access elements (using index)
    // index starts from 0
    printf("Number at index 2 = %d\n", myNumbers[2]);

    // change array element
    myNumbers[2] = 44;
    printf("Number at index 2 = %d\n", myNumbers[2]);


    // Set Array Size
    int ages[4];
    ages[0] = 34;
    ages[1] = 22;
    ages[2] = 12;
    ages[3] = 89;

    // Get array size
    // use sizeof operator --> returns size of a type in bytes
    printf("Size of array: %zu\n", sizeof(ages));  // 4 * 4 bytes = 16 bytes

    // Get number of elements in array
    int length = sizeof(ages) / sizeof(ages[0]);
    printf("Number of elements in ages: %d\n", length);


    // Loop through an array
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for(int i=0; i<len; i++){
        printf("%d ", myNumbers[i]);
    }printf("\n");


    // Two Dimensional Arrays
    int matrix[2][3] = { { 1, 4, 2 }, { 3, 6, 8 } };

    // access elements of a 2D array --> arr_name[rowIndex][colIndex]
    printf("Element at row 1 column 2 = %d\n", matrix[0][1]);
    
    // Loop through a 2D array
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }printf("\n");
    }

    return 0;
}