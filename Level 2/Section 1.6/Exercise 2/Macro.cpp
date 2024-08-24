/*
    Author: Ian Meyer
    Description: Testint out Macros
*/

#include<stdio.h>

#include "Defs.hpp"

int main(void){
    int a = 4;
    int b = 391;

    PRINT1(a);
    PRINT2(b);


    printf("%d", MAX2(a,b));



}