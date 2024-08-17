/*
    Author: Ian Meyer
    Contents: main function to test print in another file
*/

#include<stdio.h>

//Load in function from other script. Need to use double quotes
#include "Print.hpp"

int main(void){
    int i = 900;

    //Execute function from other script
    print(i);

}

