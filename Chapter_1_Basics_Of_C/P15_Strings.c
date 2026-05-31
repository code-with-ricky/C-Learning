#include <stdio.h>

int main()
{
    // Strings are used to store text
    // In C we dont have string type so we create string using char array
    char greetings[] = "Hello World!";
    // use %s for printing string
    printf("%s\n", greetings);

    // Access strings
    printf("%c\n", greetings[4]);

    // Modify string
    greetings[0] = 'J';
    printf("%s\n", greetings);

    // Another way of creating array
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings2);

    /*
        '\0' --> null terminating character
        this must be added at end when we are creating string using this array or characters method
        this tells C to end the string
    */

    // Special Characters
    // use backshlash character (\', \", \\)
    char txt[] = "My name is \"Amrik\". I am a Fullstack developer";
    printf("%s\n", txt);

    return 0;
}