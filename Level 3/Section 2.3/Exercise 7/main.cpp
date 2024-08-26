#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>


int main(void){
    Point pt(3,5);

    std::cout << pt.X() << std::endl;

    return 0;
}