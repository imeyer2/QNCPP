/*
    Author: Ian Meyer
    Description: Nested arrays (in some sense) and days of week
*/


#include<stdio.h>


int main(void){

    //Instantiate an array of size 7 for the 7 days
    //Note the double indexing for size of the array and size of the string (strings are arrays of chars)
    char a[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ,"Saturday"};

    int day_of_week = 4; //Needs to take on values between 1 and 7 inclusive

    printf("The day of the week is %s\n\n", a[day_of_week - 1]); // -1 to account for 0 indexing. 
}