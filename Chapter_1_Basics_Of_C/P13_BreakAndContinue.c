#include<stdio.h>
int main() {
    // Break used in loop to jum out of the loop
    for(int i=0; i<10; i++) {
        if(i == 5) break;
        printf("%d ", i);
    }printf("\n");

    // Continue used to skip one iteration
    for(int i=0; i<10; i++){
        if(i == 5) continue;
        printf("%d ", i);
    }
    return 0;
}