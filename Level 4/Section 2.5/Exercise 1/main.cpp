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


    std::cout << "What size should the array be (int): ";
    std::cin >> size;

    Point* array_of_pointers = new Point[size]; //This makes an array no problem


    delete[] array_of_pointers; // Remove from memory


    return 0;
}