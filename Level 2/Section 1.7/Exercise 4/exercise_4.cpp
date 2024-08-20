#include<stdio.h>


int main(void){

    //Instantiate an array of size 8 for the 7 days + end char
    //Note the double indexing for size of the array and size of the string (strings are arrays of chars)
    char a[8][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ,"Saturday"};

    int day_of_week = 4;

    printf("The day of the week is %s\n\n", a[day_of_week]);
}