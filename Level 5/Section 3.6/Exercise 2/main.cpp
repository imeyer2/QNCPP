/*
    Author: Ian Meyer
    Description: Catching errors
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include "shape.hpp"
#include "ArrayExceptions.hpp"
#include <iostream>

using namespace IanMeyer::CAD;
using namespace IanMeyer::Containers;
using namespace std;



int main(void){

    Array arr;

    // arr[100];
    /*
    libc++abi: terminating due to uncaught exception of type int
Abort trap: 6
    So it throws the excpetion but still crashes the program
    */

   //After catching the exception (throw statement)
   try{
    arr[100];
   }
   //Recall that the `throw` keyword returns an int so we want to catch this int
   catch (OutOfBoundsException oob) {//(int error){
    std::cout << oob.GetMessage() << std::endl;
   }

   //To catch any other error
   catch (...){
    std::cout << "An error occured, but it wasn't expected" << std::endl;
   };



    return 0;
};