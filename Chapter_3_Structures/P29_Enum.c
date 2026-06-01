// An enum is a special type that represents a group of constants (unchangeable values).
#include<stdio.h>

// declare enum
enum Level {
    EASY,   // 0 (default)
    MEDIUM, // 1 (default)
    HARD    // 2 (default)
};

// setting values for levels
enum TemperatureLevels {
    LOW = 25,
    HIGH = 75
};

// enum using typedef
typedef enum {
    BEGINNER = 10,
    INTERMEDIATE, // 11
    EXPERT // 12
} Stages;

int main(){
    // create variable of enum
    enum Level l;

    l = MEDIUM;
    printf("%d\n", l);

    enum TemperatureLevels tempLevel = HIGH;
    printf("%d\n", tempLevel);

    Stages stage = INTERMEDIATE;
    printf("%d\n", stage);
    return 0;
}