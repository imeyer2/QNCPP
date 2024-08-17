/*
    Author: Ian Meyer
    Contents: Ternary operator usage with 0 or 1 for logic
*/  
#include<stdio.h>

int main(void){
    int person1 = 0;
    int person2 = 1;

    /* Ternary operator usage! */
    person1 ? printf("Person 1 is married!\n") : printf("Person 1 is not married\n");
    person2 ? printf("Person 2 is married!\n") : printf("Person 2 is not married\n");

}