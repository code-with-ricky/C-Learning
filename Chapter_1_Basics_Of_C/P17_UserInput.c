#include<stdio.h>

int main(){
    // for taking input from user we have scanf()
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  // %d for specifying the type of value from user
                        // &age  --> at address of variable 'age' store the value taken from user
                        // & (reference operator) --> points to memory address

    printf("My age is: %d", age);

    // Multiple inputs
    int myNum;
    char myChar;
    printf("\nEnter a number and a character and press enter: ");
    scanf("%d %c", &myNum, &myChar);
    printf("your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);


    // Take String input
    char firstName[30]; // When working with strings in scanf(), you must specify the size of the string/array 
    printf("Enter your first name: \n");
    scanf("%s", firstName); // for strings there is no need of using the reference operator (&)
    printf("Your first name is: %s\n", firstName);

    /*
        Note: 
        --> in case of scanf, space (whitespace, tab) etc are considered as terminating character
        --> so using scanf, only single word can be taken as input even if you give multiple words
        --> it takes only the first one and stored in the variables
    */

    // In order to get multiple words use 'fgets'
    char fullName[50];
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your fullname is: %s", fullName);
    return 0;
}