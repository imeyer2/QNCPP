/*
    Author: Ian Meyer
    Description: Calculate the length of a string
*/

#include <stdio.h>

#define MAXLINE 30

// String length declaration
int Length(char str[]);

int main()
{
char string[MAXLINE+1]; // Line of maximum 30 chars + \0
int c; // The input character
int i=0; // The counter

// Print intro text
printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

// Get the characters
while ((c=getchar())!=EOF && i<MAXLINE)
{
// Append entered character to string
string[i++]=(char)c;
}
string[i]='\0'; // String must be closed with \0

printf("\n\nString length is %d\n", Length(string));

return 0;
}

// Implement the Length() function here 
int Length(char str[]){
    //Calcualte the length of the string

    // Arrays are pointers, so let's access the first element with a pointer
    char* start = str;
    int counter = 0;
    //Iterate through the array and breaking out when the pointer is at EOF.
    while (*start != '\0') {
        ++counter;
        ++start;
    }
    return counter;
}