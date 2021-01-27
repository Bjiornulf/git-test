#include <stdio.h>

char evil[] = {72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33, 10, 0}; //Evil stuff happenning...

int main(void){
    printf("%s", evil)
}