/*
    Author: Ian Meyer
    Description: Using structs and pass by reference
*/


#include<stdio.h>


//Needs global definition so that all functions know this dtype
struct Article
{
    int number;
    int quantity;
    char description[20];
};

//We need a funciton prototype to tell main that Print exists
void Print(struct Article* my_article);

int main(void){

    //Define article and print
    Article my_article = {1, 300, "Cool article"};
    Print(&my_article);

    return 0;
}

//NOW we define print properly
void Print(struct Article* my_article){
    //Print the attributes of struct
    printf("The number is %d\n", my_article->number);
    printf("The quantity is %d\n", my_article->quantity);
    printf("The description is %s\n", my_article->description);

}
