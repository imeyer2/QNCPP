/*
    Author: Ian Meyer
    Contents: Input and output for area of a triangle
*/  
#include<stdio.h>

int main(void){

   float base;
   float height;
    printf("Please enter the base length of the triangle: ");
    scanf("%f", &base);
    printf("Please enter the height of the triangle: ");
    scanf("%f", &height);

    printf("The area of the triangle is %.2f\n", base*height);
}