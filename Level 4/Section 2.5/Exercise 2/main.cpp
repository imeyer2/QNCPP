/*
    Author: Ian Meyer
    Description: Testing the new operators
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>


int main(void){

    int size;

    //Define points using the new keyword, observe that the new keyword creates pointers to the Point object
    Point* p = new Point();
    Point* p2 = new Point(3, 4);
    Point* p_copy = new Point(*p2); // Need to dereference this pointer first

    p->Distance();
    p2->Distance();
    p_copy->Distance();

    std::cout << "Sending the first pointer to cout: " << p << std::endl;
    std::cout << "Sending the second pointer to cout: " << p2 << std::endl;
    std::cout << "Sending the third pointer to cout: " << p_copy << std::endl;


    //Create an array of Point pointers with 3 elements on the heap
    Point** three_elements_on_heap = new Point*[3]; // We have the double dereference on the LHS because we want the array object to be a pointer to a location in memory that stores pointer objects (Point*)
    //So when completely dereferenced, each element in a Point
    //RHS has a * because it is an array of pointers

    int n = sizeof(three_elements_on_heap) / sizeof(three_elements_on_heap[0]);

    for (int i = 0; i < n; i++) {

        //For each element (which is supposed to be a pointer to a Point object). We need to actually create the Point objects now
        three_elements_on_heap[i] = new Point();
    };

    for (int i = 0; i < n; i++) {
        //For each element in the array, make a new element on the heap
        delete three_elements_on_heap[i];
    };


    //Delete the array itself

    delete[] three_elements_on_heap;

    return 0;
}