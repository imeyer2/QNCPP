/*
    Author: Ian Meyer
    Description: Writing letters to a file
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    // File for user to put their stuff in
    FILE *file_pointer;
    char name_of_file[100];

    printf("Enter the filename you wish to write to: ");
    scanf("%s", name_of_file);
    printf("Thanks\n");

    getchar(); //Remove the newline character left after hitting enter by scanf

    file_pointer = fopen(name_of_file, "w");

    //To store the input
    char c;

    //To store the entered letters but entered is a pointer to the overlying array
    int max_letters = 10;
    char *entered = (char *)malloc(max_letters * sizeof(char));

    //Index to keep track of where we are in the entered array
    int i = 0;
    
    printf("ENTER LETTERS:\n");
    c = getchar();
    while (c != 1){ //Break out when CTRL+D is hit. char and int comparision??
        if (c == '\n'){
            //Print the entered letters
            printf("Your characters were %s\n", entered);
            printf("WRITING YOUR LETTERS TO FILE\n");

            fprintf(file_pointer, "%s", entered);

            //clear the buffer
            for (int j = 0; j < sizeof(*entered)/sizeof(entered[0]); j++){
                entered[j] = '\0';
            }
            //Reset index
            i = 0;
        } else {
            //Add letter ot entered
            entered[i++] = c; //Learning the .insert method as opposed to [] =
        }

        // Okay now check for buffer overflow
        if (i > sizeof(entered)) {
            max_letters = 2 * sizeof(entered);
            entered = (char *)realloc(entered, max_letters * sizeof(char));

        }

        c = getchar();
    }

    free(entered);
    fclose(file_pointer);
    printf("CTRL + D is a correct ending\n");
    return 0;
}