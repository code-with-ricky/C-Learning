/*
    --> Structures (also called structs) are way to group several related variables into one place
    --> each variable in the structure is known as a member of the structure
    --> a structure can contain may different data types (int, float, char etc)
*/

#include<stdio.h>
#include<string.h>

struct MyStructure { // Structure declaration
    int myNumber; // Member
    char myLetter; // Member
    char myName[30]; // String
}; // End the structure with a semicolon

int main(){
    // create a variable of struct to access it
    struct MyStructure s1;
    struct MyStructure s2;
    struct MyStructure s3 = { 12, 'E', "Elle"};  // simple syntax

    // assign values to members of s1
    s1.myNumber = 45;
    s1.myLetter = 'A';
    // s1.myName = "Amrik";  // this gives error
    strcpy(s1.myName, "Amrik");

    // Print Values
    printf("My number = %d\n", s1.myNumber);
    printf("My letter = %c\n", s1.myLetter);
    printf("My Name in s2 = %s\n", s1.myName);

    s2.myNumber = 400;
    s2.myLetter = 'Z';
    strcpy(s2.myName, "Rohan");
    printf("My number in s2 = %d\n", s2.myNumber);
    printf("My letter in s2 = %c\n", s2.myLetter);
    printf("My Name in s2 = %s\n", s2.myName);

    printf("s3 --> %d, %c, %s\n", s3.myNumber, s3.myLetter, s3.myName);

    // Copy Structure
    struct MyStructure s4;
    s4 = s3;
    printf("s4 --> %d, %c, %s\n", s4.myNumber, s4.myLetter, s4.myName);
    
    // Modify struct vlaues
    // -> use dot operator
    // -> for string use strcpy()
    strcpy(s4.myName,"Deva");
    s4.myNumber = 100;
    printf("modified s4 --> %d, %c, %s\n", s4.myNumber, s4.myLetter, s4.myName);
    printf("s3 --> %d, %c, %s\n", s3.myNumber, s3.myLetter, s3.myName); // noot modifying s4 doesnot modify s3 aswel

    return 0;
}