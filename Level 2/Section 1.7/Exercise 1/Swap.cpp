/*
    Author: Ian Meyer
    Description: Definition file for Swap
*/

#include "Swap.hpp"


void Swap(int* i, int* j){
    //This function takes pointers as input

    int temp = *i;
    *i = *j;
    *j = temp;
}