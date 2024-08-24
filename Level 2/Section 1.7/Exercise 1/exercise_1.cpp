/*
    Author: Ian Meyer
    Description: Pass by reference
*/
#include<stdio.h>
#include "Swap.hpp"


int main(void){

    int i = 10;
    int j = 20;

    //Print Numbers
    printf("%d\n", i);
    printf("%d\n\n", j);

    //Swap by passing their location in memory (pointer dtype)
    Swap(&i, &j);

    //Print New Numbers
    printf("%d\n", i);
    printf("%d\n", j);

    
}