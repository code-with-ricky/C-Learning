#include<stdio.h>
#include<string.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));  // 26
    printf("%zu\n", sizeof(alphabet));   // 27  as it counts the \0 (null character) also

    // also sizeof will return the meory size (in bytes) and not actual length of string
    char greetings[50] = "Hello Everyone";
    printf("%zu\n", sizeof(greetings));  // 50

    // Concatenate strings
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s\n", str1);

    // Copy String
    char s1[20] = "Hello World!";
    char s2[20];
    strcpy(s2, s1);
    printf("%s\n", s2);

    // Compare string
    char st1[] = "Hello";
    char st2[] = "Hello";
    char st3[] = "Hi";
    printf("%d\n", strcmp(st1, st2)); // returns 0 --> as strings are equal
    printf("%d\n", strcmp(st1, st3)); // return -1 (strings different)
    return 0;
}