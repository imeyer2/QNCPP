/*
    Author: Ian Meyer
    Contents: Definind the print() function from Print.hpp
*/
#include<stdio.h>
#include "Print.hpp"

int print(int input){
    printf("Input is %d\n", input);
    printf("Doubled is %d\n", 2 * input);

    return 0;
}