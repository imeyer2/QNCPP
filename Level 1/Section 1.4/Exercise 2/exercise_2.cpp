/*
    Author: Ian Meyer
    Contents: Count letters, newlines, and words given an input
*/  

#include<stdio.h>


int main(void){
    int num_chars = 0;
    int num_words = 0;
    int num_newlines = 0;

    int last_char_was_alphanum = 0;
    printf("Enter stuff:\n");

    char c;
    do{
        char c = getchar();
        if (c == EOF){
            break;
        }

        if (c == '\n') {

            // Always increment newline counter
            num_newlines += 1;

            // Now to see if we need to update the word counter
            if (last_char_was_alphanum == 0){ //Newline occurs after another space
                last_char_was_alphanum = 0;

            } else { //Newline occurs after a real character
                num_words += 1;
                last_char_was_alphanum = 0;

            }
            
        } else if (c == ' '){
            if (last_char_was_alphanum == 0){ //Space occurs after another space
                last_char_was_alphanum = 0;

            } else { //Space occurs after a real character
                num_words += 1;
                last_char_was_alphanum = 0;

            }
            last_char_was_alphanum = 1;
        } else {
            num_chars += 1;
            last_char_was_alphanum = 1;

        }


    } while (c != EOF);


    printf("The number of chars was %d\n", num_chars);
    printf("The number of words was %d\n", num_words);
    printf("The number of newlines was %d\n", num_newlines);


    return 0;


}