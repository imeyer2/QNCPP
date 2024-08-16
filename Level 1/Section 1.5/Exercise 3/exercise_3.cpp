#include<stdio.h>

//Load in function from other script. Need to use double quotes
#include "exercise_3_headers.hpp"

int main(void){
    int i = 900;

    //Execute function from other script
    print(i);

}

//clang++ -std=c++17 -o exercise_3 exercisepp exercise_3_print.cpp 