#include <stdio.h>
// The typedef keyword lets you create a new name (an alias) for an existing type.
typedef float Temperature; // it means Temperature is just another name for float

struct Car {
    char brand[30];
    int year;
};

// With typedef
typedef struct {
    char brand[30];
    int year;
} Car;

int main()
{
    Temperature today = 25.5;  // it means --> float today = 25.5;
    Temperature tomorrow = 23.65;

    printf("Today: %.1f C\n", today);
    printf("Tomorrow: %.1f C\n", tomorrow);

    /*
        NOTE:
        In modern C, typedef is often used together with struct, enum, and function pointers to keep code clean and easier to read.
    */
   struct Car car1 = {"BMW", 1999}; // without typedef, needs struct
   Car car2 = {"Ford", 2005};  // shorter with typedef

    return 0;
}