/*
    Author: Ian Meyer
    Description: Testing the new operators
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include <iostream>


int main(void){

    int size;

    Array arr(10); // Need to use parenthesis to initialize the Array, do not use the brackets, since this will make arr a pointer

    //Define points using the new keyword, observe that the new keyword creates pointers to the Point object
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {

        //Print point
        std::cout << arr[i] << std::endl;

        //For each element (which is supposed to be a pointer to a Point object). We need to actually create the Point objects now
        // Point temp(i);
        arr[i] = Point(i); //Remember the new keyword will create a pointer of type Point
    };

    // std::cout << arr << std::endl;

    return 0;
}